#include <stdio.h>
#include <string.h>

int main (){
	printf("hi.\n");

	float num1 = 0;
	float *p1;
	p1 = &num1;

	float num2 = 0;
	float *p2;
	p2 = &num2;

	float result = 0.0;
	float *pr;
	pr = &result;

	char operration = '*';
	char *po;
	po = &operration;
	
	printf("1.sayi: ");
	scanf("%f", p1);
	
	printf("2.sayi: ");
	scanf("%f", p2);
	
	printf("operration: ");
	scanf("%s",po);

	if(*po == '+'){
		*pr = *p1 + *p2;
		printf("\nsonuc: %d ", result);
	}else if(*po == '-'){
		*pr = *p1 - *p2;
		printf("\nsonuc: %f ", result);
	}else if(*po == '*'){
		*pr = *p1 * *p2;
		printf("\nsonuc: %f ", result);
	}else if(*po == '/'){
		*pr = *p1 / *p2;
		printf("\nsonuc: %f ", result);
	}else{
		printf("Hata");
	}	

	scanf("%p", p1);

	return 0;
}