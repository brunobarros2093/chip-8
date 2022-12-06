INCLUDES= -I ./include
FLAGS= -g
all:
	gcc ${FLAGS} ${INCLUDES} ./src/main.c -L ./lib -lSDL2main -lSDL2 -o ./bin/main
# -lmingw32 - no windows
#mingw32-make - para rodar 