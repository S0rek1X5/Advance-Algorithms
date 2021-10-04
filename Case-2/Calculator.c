#include <stdio.h>
int main ()
{
	float add=0,promediot,max=0,min,porA,porB,porC,porD,porF,estud;
	int i,cant,opc,A=0,B=0,C=0,D=0,F=0;
	do{
		printf("------Bienvenido------\n");
		printf("Cuantos estudiantes conforman su grupo?: ");scanf("%i",&cant);
		for(i=0;i<cant;i++){
			printf("\nIntroduzca la calificacion del estudiante %i\n: ",i+1);scanf("%f",&estud);
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
		printf("\nEl promedio de sus estudiantes es de: %1.1f",promediot);
		printf("\nCalificacion mas alta-> %1.1f\nCalificacion mas baja-> %1.1f\n",max,min);
		printf("--------------");
		printf("\nEstadisticas\n");
		printf("%i Sacanon A - %i Sacaron B\n%i Sacaron C - %i Sacaron D\n%i Sacaron F",A,B,C,D,F);
		printf("\n\n%1.1f Saco A %1.1f Saco B %1.1f Saco C %1.1f Saco D %1.1f Saco F\n",porA,porB,porC,porD,porF);
		printf("\nPresione 1 para REINTENTAR | Presione 2 para SALIR\n: ");scanf("%d",&opc);
		printf("\n--------------------------------------\n");
	}while(opc==1);
	return 0;
}
