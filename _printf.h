#ifndef _PRINTF_H
#define _PRINTF_H

#include "main.h"

/**
 * enum PrintfState - Contains the different states that
 * _printf can be in
*/
typedef enum __attribute__ ((__packed__))
{
	NORMAL = 0, FLAG, WIDTH, PRECISION, LENGTH, SHORT, LONG, SPEC
} PrintfState;

/**
 * enum PrintfLengthState - Contains the different length states that
 * _printf can be in
*/
typedef enum __attribute__ ((__packed__))
{
	LEN_DEFAULT = 10, LEN_SHORT_SHORT, LEN_SHORT, LEN_LONG, LEN_LONG_LONG
} PrintfLengthState;

/**
 * enum PrintfFlagsState - Contains the different length states that
 * _printf can be in
*/
typedef enum __attribute__ ((__packed__))
{
	FLAG_NONE = 20, FLAG_PLUS = '+', FLAG_MINUS = '-',
	FLAG_SPACE = ' ', FLAG_HASH = '#', FLAG_ZERO = '0'
} PrintfFlagsState;

typedef enum __attribute__ ((__packed__))
{
	BASE_BINARY = 2, BASE_OCTAL = 8, BASE_DECIMAL = 10, BASE_HEX = 16
} Radices;


#endif

