#include <stdio.h>
int main()
{
	float offer,min=9999,max=0,diff;
	int i;
	printf("----------Welcome----------\n");
	for(i=0;i<5;i++){
		printf("\nType the %i offer: $",i+1);scanf("%f",&offer);
		if(offer>max){
			max=offer;
		}
		if(offer<min){
			min=offer;
		}
	}
	diff=max-min;
	printf("\nThe cheaper offer is: $%1.2f",min);
	printf("\nThe difference between the most expensive is: $%1.2f",diff);
	return 0;
}
