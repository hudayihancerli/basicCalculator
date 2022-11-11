#include <stdio.h>
#include <string.h>

int main (){
	printf("hi.\n");

	int num1 = 0;
	int *p1;
	p1 = &num1;

	int num2 = 0;
	int *p2;
	p2 = &num2;

	int result = 0;
	int *pr;
	pr = &result;

	char operration = '*';
	char *po;
	po = &operration;

	printf("%d | %d | %d| %c\n", *p1, *p2, *pr , *po);
	
	printf("1.sayi: ");
	scanf("%p", p1);
	
	printf("2.sayi: ");
	scanf("%p", p2);
	
	printf("operration: ");
	scanf("%s", &operration);
	
	
	if(*po == '+'){
		result = *p1 + *p2;
		printf("\n sonuc: %d ", *pr);
	}else if(*po == '-'){
		result = *p1 - *p2;
		printf("\n sonuc: %d ", *pr);
	}else if(*po == '*'){
		result = *p1 * *p2;
		printf("\n sonuc: %d ", *pr);
	}else if(*po == '/'){
		result = *p1 / *p2;
		printf("\n sonuc: %d ", *pr);
	}else{
		printf("Hata");
	}
	printf("%d | %d | %d | %c\n", num1, num2, result, operration );
	return 0;

}


