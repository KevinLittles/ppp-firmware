#ifndef DATATYPES_H
#define DATATYPES_H

#ifdef __WIN32
    #include <stdint.h>
#endif

#ifdef __AVR
	#include <stdint.h>
#endif

typedef uint8_t boolean;
#define true 1
#define false 0

#endif // DATATYPES_H
