#include <stdio.h>
int main ()
{
	float add=0,promediot,max=0,min=999,porA,porB,porC,porD,porF,estud;
	int i,cant,opc,A=0,B=0,C=0,D=0,F=0;
	do{
		printf("------Welcome------\n");
		printf("How much students make up your group?: ");scanf("%i",&cant);
		for(i=0;i<cant;i++){
			printf("\nEnter the student's grade %i\n: ",i+1);scanf("%f",&estud);
			add += estud;
			promediot=add/cant;
			if(estud>max){
				max=estud;
			}
			if(estud<min){
				min=estud;
			}
			if(estud>91 || estud==100){
				A+=1;
			}
			else if(estud>81 || estud==90){
				B+=1;
			}
			else if(estud>71 || estud==80){
				C+=1;
			}
			else if(estud>61 || estud==70){
				D+=1;
			}
			else if(estud<=60){
				F+=1;
			}	
		}
		porA=(A*100)/cant;porB=(B*100)/cant;porC=(C*100)/cant;porD=(D*100)/cant;porF=(F*100)/cant;
		printf("\nThe average of his students is: %1.1f",promediot);
		printf("\nHighest rating-> %1.1f\nLowest rating-> %1.1f\n",max,min);
		printf("--------------");
		printf("\nstatistics\n");
		printf("%i Won A - %i Won B\n%i Won C - %i Won D\n%i Won F",A,B,C,D,F);
		printf("\n\n%1.1f Percent Won A\n%1.1f Percent Won B\n%1.1f Percent Won C\n%1.1f Percent Won D\n%1.1f Percent Won F\n",porA,porB,porC,porD,porF);
		printf("\nPress 1 To CONTINUE | Press 2 to EXIT\n: ");scanf("%d",&opc);
		printf("\n--------------------------------------\n");
	}while(opc==1);
	return 0;
}
