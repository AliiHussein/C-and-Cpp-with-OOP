#include <stdio.h>

typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

typedef signed long int32;
typedef signed short int16;
typedef signed char int8;

#define SETBIT(var,bit) var = var | (1<<bit)
#define TOGBIT(var,bit) var = var ^ (1<<bit)
#define CLRBIT(var,bit) var = var & ~(1<<bit)
#define READBIT(var,bit) ((var >> bit) & 1)