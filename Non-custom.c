#include <stdio.h>
#include "main.h"

/**
 * Main - function to demonstrate printf with precision.
 * Return: 0 on successful execution.
 */
int nonCustom(int intValue, int  floatValue, char stringValue) 
{
    int intValue = 12345;
    float floatValue = 123.456789;
    char stringValue[] = "Hello, World!";

    printf("%.5d\n", intValue); 
    printf("%.2f\n", floatValue); 
    printf("%.7s\n", stringValue);

    return (0);
}