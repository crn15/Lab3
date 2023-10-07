#include <stdio.h>

int valor_minimo(int arreglo[], int minimo, int tamano){
	minimo=arreglo[0];
 	for (int i=1; i<tamano; i++){
	   if (arreglo[i]< minimo){
 	     minimo=arreglo[i];}
 	};
	return minimo;
 	    };


int valor_maximo(int arreglo[], int maximo, int tamano){
	maximo=arreglo[0];
	for (int i=1; i<tamano; i++){
           if (arreglo[i]> maximo){
             maximo=arreglo[i];}
        };
	return maximo;
}


void valores_con_punteros(int *arreglo, int *minimo, int *maximo, int tamano){
	*minimo=arreglo[0];
	*maximo=arreglo[0];
	for (int i=1; i<tamano; i++){
	   if (*(arreglo+i)> *maximo){
	    *maximo=(*(arreglo+i));};
	   if (*(arreglo+i)< *minimo){
            *minimo=*(arreglo+i);}
        };
}



int main(){

int arreglo[]={21, 24, 65, 3, 56, 12, 35, 15};
int min;
int max;

int longitud = sizeof(arreglo)/sizeof(arreglo[0]);

int valor_min=valor_minimo(arreglo, min, longitud);
printf("MINIMO: %d\n", valor_min);

int valor_max=valor_maximo(arreglo, max, longitud);
printf("MAXIMO: %d\n", valor_max);

valores_con_punteros(arreglo, &min, &max, longitud);
printf("PUNTEROS, VALOR MINIMO: %d\n", min);
printf("PUNTEROS, VALOR MAXIMO: %d\n", max);

return 0;
}
