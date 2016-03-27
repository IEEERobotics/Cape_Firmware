#include "irRange.h"
#include "mcc_generated_files/mcc.h"

uint16_t adc_readings[10];
uint16_t * adc_readings_ptr = adc_readings;
uint8_t * i2cread_ptr = (uint8_t*)adc_readings;
adc_channel_t adc_state;

void Reset_ADC_Pointer(void);


void init_irRange(void){
    int i;

    for(i = 0; i < 10; i++){
        *(adc_readings + i) = 0;
    }
    adc_state = channel_AN0;
    
}


void readADCs(void){
    
    switch(adc_state){
        case channel_AN0:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN0);
            adc_readings_ptr++;
            adc_state = channel_AN1;
            
            break;
        case channel_AN1:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN1);
            adc_readings_ptr++;
            adc_state = channel_AN2;
            
            break;
        case channel_AN2:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN2);
            adc_readings_ptr++;
            adc_state = channel_AN3;
            
            break;
        case channel_AN3:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN3);
            adc_readings_ptr++;
            adc_state = channel_AN4;
            break;
        case channel_AN4:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN4);
            adc_readings_ptr++;
            adc_state = channel_AN14;
            break;
        case channel_AN14:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN14);
            adc_readings_ptr++;
            adc_state = channel_AN15;
            break;
        case channel_AN15:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN15);
            adc_readings_ptr++;
            adc_state = channel_AN16;
            break;
        case channel_AN16:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN16);
            adc_readings_ptr++;
            adc_state = channel_AN17;
            break;
        case channel_AN17:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN17);
            adc_readings_ptr++;
            adc_state = channel_AN18;
            break;
        case channel_AN18:
            *adc_readings_ptr = (uint16_t)ADC_GetConversion(channel_AN18);
            adc_readings_ptr = adc_readings;
            adc_state = channel_AN0;
            break;
                    
    }
    
    
}

uint8_t getADCReading(void){
    
    uint8_t temp = *i2cread_ptr;
    i2cread_ptr++;
    
    if(i2cread_ptr == ((uint8_t*)adc_readings + 20)){
        i2cread_ptr = (uint8_t*)adc_readings;
    }
    
    return temp;
}
extern int debug;  

void Reset_ADC_Pointer(void){
    i2cread_ptr = (uint8_t*)adc_readings;
    //debug = 1; 
}
