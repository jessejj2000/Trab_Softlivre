#include "Menor.h"

double Menor(float* v, int tam){
	float valor = 100000;
	for(int i = 0; i<tam; i++){
	if(v[i] < valor)
	valor  = v[i];
	}
	
	return valor;

}