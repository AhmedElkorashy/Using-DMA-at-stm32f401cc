/************************************************************************************************/
/*										FILE INCLUSION											*/
/************************************************************************************************/

/***********************LIB*************************/
#include "../include/LIB/Std_Types.h"
#include "../include/LIB/BIT_MATH.h"

/************************MCAL***********************/
#include "../include/MCAL/MRCC/MRCC_Interface.h"
#include "../include/MCAL/MSYSTICK/MSYSTICK_Interface.h"
#include "../include/MCAL/MGPIO/MGPIO_Interface.h"
#include "../include/MCAL/MSPI/MSPI_Interface.h"
#include "../include/MCAL/MNVIC/MNVIC_Interface.h"
#include "../include/MCAL/DMA/MDMA_Interface.h"

/************************HAL************************/
#include "../include/HAL/HTFT/HTFT_Image.h"
#include "../include/HAL/HTFT/HTFT_Interface.h"
/**********************MACROS************************/


/********************Global Variables****************/
/*Variable*/

/************************************************************************/
/*							FUNCTIONS DECLARATION						*/
/************************************************************************/


/************************************************************************/
/*							ENTRY POINT <main>							*/
/************************************************************************/
void func(void);
u32 array1[1000];
u32 array2[1000];
u32 array3[1000];
u32 array4[1000];
void main(void)
{
	/***********************Local Variable*************************/

	/***********************Clock initialization*************************/
	/* Enable RCC */

	for(u32 i=0;i<1000;i++)
	{
		array1[i]=1;
		array2[i]=2;
		array3[i]=3;
		array4[i]=4;

	}
	MRCC_voidInit();

	/* Clocks to usage Peripherals Enable (use RCC) */
	MRCC_voidEnablePeripheral(RCC_AHB1,RCC_AHB1_DMA2);
	DMA2_Init();
	DMA2_SetStreamConfigration(0,0,array1,array2,2,1000);
	DMA2_SetCallBack(0,&func);
	MNVIC_voidEnablePeripheralInterrupt(DMA2_Stream0_IRQ);
	DMA2_enableStream(0);
	/**********************Pins initialization**************************/
	/**********************Peripherals initialization**************************/
	for(u32 i=0;i<1000;i++)
	{
		array4[i]=array3[i];
	}

	/**********************Operation Code*****************************/
	while(1)
	{

	}
}
void func(void)
{
	asm("NOP");
}
