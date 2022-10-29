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

#include "x_macro.h"


#if MACRO__CODE == 1
#define DATABASE_DATA(row_id, type, name)\  
    static type g##name;\

    DATABASE_LIST
#undef DATABASE_DATA  

#define DATABASE_DATA(row_id, type, name)\  
    void set##name(type name)\
    {g##name = name;}\            
    type get##name(void)\
    {return g##name;}\

    DATABASE_LIST
#undef DATABASE_DATA  

#endif /*end of MACR_CODE*/

#if NORMAL__CODE == 1

    static uint16_t gBldcSpeed      = 0;
    static bool     gBldcStatus     = false;
    static bool     gBldcDirection  = false;     // cw= false, ccw= true;
    // set and get function
    void setBldcSpeed(uint16_t Speed)
    {   
        gBldcSpeed = Speed;
    }
    uint16_t getBldcSpeed(void)
    {
        return gBldcSpeed;
    }

    void setBldcStatus(bool Status)
    {
        gBldcStatus = Status;
    }
    bool getBldcStatus(void)
    {
        return gBldcStatus;
    }

    void setBldcDirection(bool Direction)
    {
        gBldcDirection = Direction;
    }
    bool getBldcDirection(void)
    {
        return gBldcDirection;
    }
#endif/*end if for normal code*/   
