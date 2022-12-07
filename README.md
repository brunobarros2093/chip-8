# chip-8 emulador em C 


- O Chip-8 foi um emulador desenvolvido por volta de 1970 para ajudar desenvolvedores  de jogos a testarem seus jogos. Wiki [https://en.wikipedia.org/wiki/CHIP-8]


# Docs e guides
- Write a chip-8 emulator [https://tobiasvl.github.io/blog/write-a-chip-8-emulator/]
- Iniciando no desenvolvimento de emuladores [https://bcc.ime.usp.br/tccs/2020/dpa/monografia.pdf]
- How to write an emulator (CHIP-8 interpreter) [https://multigesture.net/articles/how-to-write-an-emulator-chip-8-interpreter/]
- Chip-8 Reference [http://devernay.free.fr/hacks/chip8/C8TECH10.HTM] 

# Setup SDL2 no Linux 
> sudo apt install libsdl2-dev 

E o Makefile vai ser algo perto disso:
> gcc ${FLAGS} ${INCLUDES} ./src/main.c `sdl2-config --cflags --libs` -o ./bin/main

Para Windows é preciso baixar o SDL no site e adiciona-lo nas pastas como estão organizados, a diferença fica no Makefile, no windows é preciso adicionar 

>gcc ${FLAGS} ${INCLUDES} ./src/main.c -L ./lib -lmingw32 -lSDL2main -lSDL2 -o ./bin/main

Isso se você seguiu a estrutura de pastas que eu segui. Após baixar o SDL2, extrair os arquivos da pasta lib, include e bin, nos respectivos do seu projeto.