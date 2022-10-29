/*          X-macro
 Is used for multiple items has multiple similar line of code 
 you don't have manually type that repeated 
 you can do that by x-macro automatically
 video MUTEX EMBEDDED
 https://www.youtube.com/watch?v=2lZBGy-fPAA&list=PLfExI9i0v1smd_mUgoib94t8KKap0X-zh&index=13 
    */

/*
In this tutrial first we implement normal code
second X-macro
*/

#ifndef _X_MCRO_H_
#define _X_MCRO_H_

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define NORMAL__CODE 0
#define MACRO__CODE  1


#if MACRO__CODE == 1

#define DATABASE_LIST \
    DATABASE_DATA(DatabaseId_BLDC_Speed, uint16_t, BldcSpeed)\
    DATABASE_DATA(DatabaseId_BLDC_Status, bool, BldcStatus)\
    DATABASE_DATA(DatabaseId_BLDC_Diraction, bool, BldcDiraction)\

typedef enum 
{
#define DATABASE_DATA(row_id, type, name)\
  row_id,\

  DATABASE_LIST
#undef DATABASE_DATA    
}DatabaseId_e;

    
#define DATABASE_DATA(row_id, type, name)\  
    void set##name(type name);\            
    type get##name(void);\

    DATABASE_LIST
#undef DATABASE_DATA  

#endif /*end of MACR_CODE*/

#if NORMAL__CODE == 1

    typedef enum 
    {
        DatabaseId_BLDC_Speed = 0,
        DatabaseId_BLDC_Status,
        DatabaseId_BLDC_Direction,

    }DatabaseId_e;

    // set and get function
    void setBldcSpeed(uint16_t Speed);
    uint16_t getBldcSpeed(void);

    void setBldcStatus(bool Status);
    bool getBldcStatus(void);

    void setBldcDirection(bool Direction);
    bool getBldcDirection(void);

#endif/*end if for normal code*/   



#endif