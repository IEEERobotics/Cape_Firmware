/* 
 * File:   irRange.h
 * Author: deathmonkey
 *
 * Created on November 8, 2015, 8:55 PM
 */

#include "mcc_generated_files/mcc.h"

#ifndef IRRANGE_H
#define	IRRANGE_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

void init_irRange(void);
void readADCs(void);
uint8_t getADCReading(void);

#endif	/* IRRANGE_H */

