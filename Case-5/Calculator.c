#include <stdio.h>
int main()
{
	float wei,prom,add=0,min=9999,max=0;
	int cam=0,i,ai,porcent;
	printf("----------Welcome----------");
	printf("\n\nType the weight of the trucks\n");
	i=1;
	do{
		printf("\n%i Type your truck weight: ",i);scanf("%f",&wei);
		add+=wei;
		i++;
		if(wei>max){
			max=wei;
		}
		if(wei<min){
			min=wei;
		}
		if(wei>=15){
			cam++;
		}
		printf("\nType 1 to CONTINUE / Type 2 to STOP:");scanf("%d",&ai);
	}while(ai!=2 || ai!=2);
	i=i-1;
	porcent=(cam)*(100)/i;
	prom=add/i;
	printf("\n----------------------------------------------\n");
	printf("\n %1.1f Tons The weight of all the trucks registered today",add);
	printf("\n---");
	printf("\n %1.1f Tons The average of all the trucks registered today",prom);
	printf("\n---");
	printf("\n The heavier truck %1.1f Tons \n The lighter truck %1.1f Tons",max,min);
	printf("\n---");
	printf("\n Porcentage of trucks up to 15 Tons\n %d Percent",porcent);
	return 0;
}
