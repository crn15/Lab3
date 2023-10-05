#include <stdio.h>

int valor_en_arreglo(int lista[], int valor){

int exist=0;
int posicion=0;
for(int i=0; i<=5; i++) {
if(lista[i]==valor){
	exist=1;
	posicion=i;
	break;
};
};

if (exist==1){
printf("EL NÙMERO %d SE ENCUENTRA EN EL ARREGLO EN LA POSICION %d.\n", valor, posicion);}
else{
printf("EL NÙMERO %d NO SE ENCUENTRA EN EL ARREGLO.\n", valor);};
}


int busqueda_binaria(int lista[], int valor, int inicio, int final){
int mitad;

while (inicio<=final){
	int mitad=(inicio+final)/2;
	if (lista[mitad]==valor){
	return mitad;}
	else if (valor<lista[mitad]){
	final=mitad-1;}
	else {
	inicio=mitad+1;}
};
return -1;
}


int recursividad(int lista[], int valor, int inicio, int final){
int mitad=(inicio+final)/2;

if (lista[mitad]==valor){
return mitad;}
if (inicio>final){
return -1;}
if(valor<lista[mitad]){
return recursividad(lista, valor, inicio, mitad-1);}
else {return recursividad(lista, valor, mitad+1, final);};
}



int main(){
int arreglo[6]={2, 4, 6, 23, 56, 79};
int numero;
printf("INGRESE UN NÙMERO ENTERO: ");
scanf("%d", &numero);

valor_en_arreglo(arreglo, numero);

int inicio=0;
int final=5;
int busq= busqueda_binaria(arreglo, numero, inicio, final);
if(busq!=-1){
printf("EL NUMERO %d SE ENCUENTRA EN EL ARREGLO EN LA POSICION %d.\n", numero, busq);}
else{
printf("EL NUMERO %d NO SE ENCUENTRA EN EL ARREGLO.\n", numero);};

int rec= recursividad(arreglo, numero, inicio, final);
if(rec!=-1){
printf("EL NUMERO %d SE ENCUENTRA EN EL ARREGLO EN LA POSICION %d.    \n", numero, rec);}
else{
printf("EL NUMERO %d NO SE ENCUENTRA EN EL ARREGLO.\n", numero);};

return 0;
}
