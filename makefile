ARQ = main main.c
INICIO = gcc -o
RUN = ./main 
CLEAN = rm main

all:
	$(INICIO) $(ARQ)

run:
	$(RUN)

clean:
	$(CLEAN)
