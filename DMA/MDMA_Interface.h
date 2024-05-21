/*
 * MDMA_Interface.h
 *
 *  Created on: May 15, 2024
 *      Author: User
 */

#ifndef MDMA_INTERFACE_H_
#define MDMA_INTERFACE_H_


void DMA2_Init(void);

void DMA2_SetStreamConfigration(u8 Copy_u8StreamID,
		                        u8 Copy_u8ChannelID,
		                        u32 *Copy_pu32SourceAdress,
		                        u32 *Copy_pu32DestinationAdress,
								u8 Copy_u8ElemntSize,
								u16 Copy_u16BlockSize);

void DMA2_SetCallBack(u8 Copy_u8StreamID,void(*ptr)(void));

void DMA2_enableStream(u8 Copy_u8StreamID);



#endif /* MDMA_INTERFACE_H_ */
