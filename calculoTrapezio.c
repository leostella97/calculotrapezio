#include <stdio.h>
int main (){
	float B, b, h, A;
	printf("Calculo de trapezio \n");
	printf("Digite o B: ");
	scanf("%f", &B);
	printf("Digite o b: ");
	scanf("%f", &b);
	printf("Por ultimo, digite o h: ");
	scanf("%f", &h);
	A = (B+b)*h/2;
	printf("A area e %f", A);
	getch();
}

