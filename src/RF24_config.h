
/*
 Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */
 
/*
 * Copyright (c) 2016 Gavin Hurlbut <gjhurlbu@gmail.com>
 *
 * Stripped down to Arduino-only
 */

#ifndef __RF24_CONFIG_H__
#define __RF24_CONFIG_H__

/*** USER DEFINES:  ***/ 
// #define FAILURE_HANDLING
// #define SERIAL_DEBUG

/**********************/
#define rf24_max(a, b) (a > b ? a : b)
#define rf24_min(a, b) (a < b ? a : b)

#if defined SPI_HAS_TRANSACTION
#define RF24_SPI_TRANSACTIONS
#endif
 
#include <Arduino.h>
  
// RF modules support 10 Mhz SPI bus speed
const uint32_t RF24_SPI_SPEED = 10000000;  

#include <SPI.h>
#define _SPI SPI

#ifdef SERIAL_DEBUG
	#define IF_SERIAL_DEBUG(x) ({x;})
#else
	#define IF_SERIAL_DEBUG(x)
	#if defined(RF24_TINY)
	#define printf_P(...)
    #endif
#endif
  
#include <avr/pgmspace.h>
#define PRIPSTR "%S"

#endif // __RF24_CONFIG_H__

// vim:ts=4:sw=4:ai:et:si:sts=4
