#include "Maior.h"

float Maior(float* v, float tam){
	float valor = 0;
	for(int i = 0; i<tam; i++){
	if(v[i] > valor)
	valor  = v[i];
	}
	
	return valor;
}