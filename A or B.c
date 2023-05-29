#include <stdio.h>

int main()
{
	
	int a = 0, b = 0;
	printf("Valor de A");
	scanf("%d", &a);
	printf("Valor de B");
	scanf("%d", &b);
	
	if(a > b)
		printf("A maior que B");
	else
		printf("B maior que A");
		
	return 0;
	
	
}
