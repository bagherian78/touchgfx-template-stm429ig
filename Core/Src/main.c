/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "crc.h"
#include "dma2d.h"
#include "fatfs.h"
#include "ltdc.h"
#include "sdio.h"
#include "usart.h"
#include "gpio.h"
#include "fmc.h"
#include "app_touchgfx.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//#include "XPTC.h"
#include "stdbool.h"
bool data=false;
bool toggle;
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */



/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	toggle = false;

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */
  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_FMC_Init();
  FMC_SDRAM_CommandTypeDef command;
////Enable The clock
HAL_Delay(100);
command.CommandMode = FMC_SDRAM_CMD_CLK_ENABLE;
command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
command.AutoRefreshNumber= 2;
command.ModeRegisterDefinition=0;
HAL_SDRAM_SendCommand(&hsdram1, &command, 5000);
HAL_Delay(100);
////Precharge SDRAM
command.CommandMode = FMC_SDRAM_CMD_PALL;
command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
command.AutoRefreshNumber= 4;
command.ModeRegisterDefinition=0;
HAL_SDRAM_SendCommand(&hsdram1, &command, 5000);
HAL_Delay(100);
////Precharge SDRAM
command.CommandMode = FMC_SDRAM_CMD_AUTOREFRESH_MODE;
command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
command.AutoRefreshNumber= 8;
command.ModeRegisterDefinition=0;
HAL_SDRAM_SendCommand(&hsdram1, &command, 5000);
HAL_Delay(100);
///
command.CommandMode = FMC_SDRAM_CMD_LOAD_MODE;
    command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
    command.AutoRefreshNumber= 4;
    command.ModeRegisterDefinition=0x130;
    HAL_SDRAM_SendCommand(&hsdram1, &command, 5000);
    HAL_Delay(100);
    ///
HAL_SDRAM_WriteProtection_Disable(&hsdram1);
HAL_Delay(100);
  MX_USART1_UART_Init();
  MX_CRC_Init();
  MX_LTDC_Init();
  MX_SDIO_SD_Init();
  MX_FATFS_Init();
  MX_DMA2D_Init();
  MX_TouchGFX_Init();
  /* USER CODE BEGIN 2 */
  /*
	////////////////////////////////////////////////////////////////////////////SDRAM CONFIG
	   FMC_SDRAM_CommandTypeDef command;
     ////Enable The clock
     HAL_Delay(100);
     command.CommandMode = FMC_SDRAM_CMD_CLK_ENABLE;
     command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
     command.AutoRefreshNumber= 2;
     command.ModeRegisterDefinition=0;
     HAL_SDRAM_SendCommand(&hsdram1, &command, 5000);
     HAL_Delay(100);
     ////Precharge SDRAM
     command.CommandMode = FMC_SDRAM_CMD_PALL;
     command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
     command.AutoRefreshNumber= 4;
     command.ModeRegisterDefinition=0;
     HAL_SDRAM_SendCommand(&hsdram1, &command, 5000);
     HAL_Delay(100);
     ////Precharge SDRAM
     command.CommandMode = FMC_SDRAM_CMD_AUTOREFRESH_MODE;
     command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
     command.AutoRefreshNumber= 8;
     command.ModeRegisterDefinition=0;
     HAL_SDRAM_SendCommand(&hsdram1, &command, 5000);
     HAL_Delay(100);
     ///
     command.CommandMode = FMC_SDRAM_CMD_LOAD_MODE;
         command.CommandTarget = FMC_SDRAM_CMD_TARGET_BANK1;
         command.AutoRefreshNumber= 4;
         command.ModeRegisterDefinition=0x130;
         HAL_SDRAM_SendCommand(&hsdram1, &command, 5000);
         HAL_Delay(100);
         ///
     HAL_SDRAM_WriteProtection_Disable(&hsdram1);
     HAL_Delay(100);
	 */
     ///////////////////////////////////////////////////////////////////////////TURN LCD ON
       HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
        HAL_UART_Transmit(&huart1, (uint8_t*)"START\n", 6, 5000);
        //XPT_init();
       ///////////////////////////////////////////////////////////////
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
        FIL pngfile;
        //char pngpath[]="\pic.png\0";
        char pngbuffer[6000];
        UINT pngcounter;


  while (1)
  {


  MX_TouchGFX_Process();
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Configure the main internal regulator output voltage 
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 15;
  RCC_OscInitStruct.PLL.PLLN = 216;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 8;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Activate the Over-Drive mode 
  */
  if (HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_LTDC;
  PeriphClkInitStruct.PLLSAI.PLLSAIN = 60;
  PeriphClkInitStruct.PLLSAI.PLLSAIR = 2;
  PeriphClkInitStruct.PLLSAIDivR = RCC_PLLSAIDIVR_2;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

////////////////////////////////

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
