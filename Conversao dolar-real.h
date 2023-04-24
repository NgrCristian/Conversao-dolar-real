#include <stdio.h>
#include <conio.h>
int main(){
	float valorreal, valordolar, cotacao, mult;

	printf("DIGITE VALOR EM DOLAR:");
	scanf("%f",&valordolar);
	printf("DIGITE A COTACAO:");
	scanf("%f",&cotacao);
	
	mult = valordolar * cotacao;
	
	printf("Valor em real eh %.2f", mult);
	
	getch();
	return(0);	
}
