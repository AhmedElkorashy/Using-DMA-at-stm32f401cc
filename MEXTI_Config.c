/************************************************************************************************/
/*										FILE INCLUSION											*/
/************************************************************************************************/
/***********************LIB*************************/
#include <LIB/Std_Types.h>
#include "../include/LIB/BIT_Math.h"
#include "../include/MCAL/MEXTI/MEXTI_Config.h"
#include "../include/MCAL/MEXTI/MEXTI_Interface.h"
#include "../include/MCAL/MEXTI/MEXTI_Private.h"


MEXTI_Configurations MEXTI_Config[MEXTI_NUMBER]=
{
		{
				MEXTI_LINE13		,
				MEXTI_PORTC			,
				MEXTI_FALLING_EDGE	,
				MEXTI_ENABLED
		},
		{
				MEXTI_LINE14		,
				MEXTI_PORTC			,
				MEXTI_FALLING_EDGE	,
				MEXTI_ENABLED
		},

};
