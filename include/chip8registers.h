#ifndef CHIP8REGISTERS_H
#define CHIP8REGISTERS_H

#include "config.h"

struct chip8_registers 
{
    // cada char tem 8bit (1 byte)
    unsigned char V[CHIP8_TOTAL_DATA_REGISTERS]; // 16 bytes 
    unsigned short I; // 16-bits
    unsigned char delay_timer;
    unsigned char sound_timer;
    unsigned short PC; // program counter 
    unsigned char SP; // stack pointer 
};


#endif