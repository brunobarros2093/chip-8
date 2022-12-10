#ifndef CONFIG_H
#define CONFIG_H

#define EMULATOR_WINDOW_TITLE "Chip8_Emultor"
#define CHIP8_MEMORY_SIZE 4096
#define CHIP8_WIDTH 64
#define CHIP8_HEIGHT 32
// multiplacor de pixel para o width/height (up scale)
#define CHIP8_WINDOW_MULTIPLIER 10
#define WIDTH CHIP8_WIDTH * CHIP8_WINDOW_MULTIPLIER
#define HEIGHT CHIP8_HEIGHT * CHIP8_WINDOW_MULTIPLIER

// registers
#define CHIP8_TOTAL_DATA_REGISTERS 16
#endif 