#include "Soma.h"

int Soma(float* v,float tam){
	float valor = 0;
	for(int i = 0; i<tam; i++){
	valor += v[i];
	}
	
	return valor;

}