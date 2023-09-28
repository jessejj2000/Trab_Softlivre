#include <stdio.h>
#include <math.h>
#include "Maior.h"
#include "Menor.h"
#include "Soma.h"

#define tamanho 10

int main (){
float array[tamanho];
for(int i = 0; i < tamanho; i++){
array[i] = i;
	
}

printf("Menor valor do array %f\n",Menor(array, tamanho));

printf("Soma de todo o vetor %f\n",(float)Soma(array, tamanho));

printf("Maior valor do array %f\n",Maior(array, tamanho));

return 0;
}



