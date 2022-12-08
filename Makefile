INCLUDES= -I ./include
FLAGS= -g

OBJECTS=./build/chip8memory.o 

all: ${OBJECTS}
	gcc ${FLAGS} ${INCLUDES} ./src/main.c ${OBJECTS} `sdl2-config --cflags --libs` -o ./bin/main
# -lmingw32 - no windows
#mingw32-make - para rodar 

./build/chip8memory.o:src/chip8memory.c 
	gcc ${FLAGS} ${INCLUDES} ./src/chip8memory.c -c -o ./build/chip8memory.o

run: 
	./bin/main 

clean:
	rm -r build/*