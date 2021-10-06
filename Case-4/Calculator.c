#include <stdio.h>
int main()
{
	int opc,i=1;
	float prod,add=0,cant,imp,total;
	printf("----------Welcome----------\n");
	printf("\nType the products price\n");
	do{
		printf("%i:$",i++);scanf("%f",&prod);
		add+=prod;
	}while(prod!=0);
	i=i-2;
	imp=add*0.07;
	total=add+imp;
	printf("\n-------------------------\n");
	printf("%i PRODUCTS $%1.2f / / $%1.2f TAX",i,add,imp);
	printf("\nTOTAL AMOUNT $%1.2f",total);
	return 0;
}
