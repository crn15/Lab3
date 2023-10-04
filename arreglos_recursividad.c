#include <stdio.h>

int valor_en_arreglo(int valor){

int arreglo[6]={2, 4, 6, 23, 56, 79};
int exist=0;

for(int i=0; i<=5; i++) {
if(arreglo[i]==valor){
	exist=1;
	break;
};
};

if (exist==1){
printf("EL NÙMERO %d SE ENCUENTRA EN EL ARREGLO.\n", valor);}
else{
printf("EL NÙMERO %d NO SE ENCUENTRA EN EL ARREGLO.\n", valor);};
}

int main(){
int numero;
printf("INGRESE UN NÙMERO ENTERO: ");
scanf("%d", &numero);

valor_en_arreglo(numero);
return 0;
}
