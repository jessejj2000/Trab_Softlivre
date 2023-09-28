ARQ = main main.c Soma.c Maior.c Menor.c
INICIO = gcc -o
RUN = ./main 
CLEAN = rm main

all:
	$(INICIO) $(ARQ)

run:
	$(RUN)

clean:
	$(CLEAN)
