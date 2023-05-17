#include <stdio.h>

int main(){
	
	float num1, num2, num3, soma, media;
	
	printf("Digite um numero real:");
	scanf("%f", &num1);
	
	printf("Digite mais um numero real:");
	scanf("%f", &num2);
	
	printf("Digite mais um numero real:");
	scanf("%f", &num3);
	
	soma = num1 + num2 + num3;
	
	media = soma / 3;
	
	printf("\n %.2f + %.2f + %.2f = %.2f", num1, num2, num3, soma);
	printf("\n a media sera = %.2f", media);
	
	return 0;
}