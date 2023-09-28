#include <stdio.h>
#include <math.h>

#define tamanho 10

int Soma(float* v,float tam);
double Menor( float* v, int tam);
float Maior(float* v, float tam);

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


int Soma(float* v,float tam){
	float valor = 0;
	for(int i = 0; i<tam; i++){
	valor += v[i];
	}
	
	return valor;

}

double Menor(float* v, int tam){
	float valor = 100000;
	for(int i = 0; i<tam; i++){
	if(v[i] < valor)
	valor  = v[i];
	}
	
	return valor;

}

float Maior(float* v, float tam){
	float valor = 0;
	for(int i = 0; i<tam; i++){
	if(v[i] > valor)
	valor  = v[i];
	}
	
	return valor;
}


