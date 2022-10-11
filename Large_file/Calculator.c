/*
================================================================
PROGRAM     : MULTI FILE FOR CALCOLATOR
Author      : Ahmed Omar
Data        : October 2022
Version     : 1.0
Disciption  :
================================================================
*/

#include <stdio.h>
#include "Calculator.h"
// constant
#define ADD 1
#define SUB 2

// Variables
static int operation = 0;
static float operand1 = 0, operand2 = 0;



//PROTOTPYE
void  Calcolator (void);
static void title(void);
static void Get_User_Inputs(void);
static void Add (void);
static void Sub (void);

void  Calcolator (void)
{
     title();
     Get_User_Inputs();
     switch(operation)
     {
        case ADD: Add();    break;
        case SUB: Sub();    break;
        default: printf("Thanks\n");
     }
}

static void title(void)
{
    printf("\n\t\tCalculator Program");
    printf("\n\t\t======================\n");
}

static void Get_User_Inputs(void)
{
    printf("\n 1- Addition.");
    printf("\n 2-Subtraction.");
    printf("\n Select operation :");
    scanf("%d", &operation);

    printf("\n Enter 1st operand :");
    scanf("%d", &operand1);

    printf("\n Enter 2st operand :");
    scanf("%d", &operand2);
}

static void Add (void)
{
    printf("\n %g + %g = %g", operand1, operand2, (operand1 + operand2));
}

static void Sub (void)
{
    printf("\n %g - %g = %g", operand1, operand2, (operand1 - operand2));
}
