#include <stdio.h>
int main()
{
	float sumaAll=0,sumaB=0,sumaG=0,promAll,promB,promG,mayB=0,mayG=0,mayAll=0,chico,chica;
	int opc1,opc2,i,cant1,cant2;
	char cf[13];
	do{
		printf("------Bienvenido------\nIntroduzca sus datos\n\n");
		printf("Digite la cantidad de estudiantes VARONES: ");scanf("%d",&cant1);
		printf("Digite la cantidad de estudiantes MUJERES: ");scanf("%d",&cant2);
		printf("------\n");
		printf("Chicos\n");
		for(i=0;i<cant1;i++){
			printf("Digite la estatura del estudiante %i: ",i+1);scanf("%f",&chico);
			sumaB += chico;
			promB=sumaB/cant1;
			if(chico>mayB){
				mayB=chico;
			}
		}
		printf("------\n");
		printf("Chicas\n");
		for(i=0;i<cant2;i++){
			printf("Digite la estatura de la estudiante %i: ",i+1);scanf("%f",&chica);
			sumaG += chica;
			promG=sumaG/cant2;
			if(chica>mayG){
				mayG=chica;
			}
		}
		promAll=promB+promG/2;
		mayAll=mayB;
		if(mayG>mayB){
			mayAll=mayG;
		}
		do{
			printf("\nQue desea saber?");
			printf("\nA---Estatura mas alta\nB---Estatura mas alta CHICO\nC---Estatura mas alta CHICA\nD---Promedio de estatura de todos\nE---Promedio de estatura de chicos\nF---Promedio de estatura de chicas\nG---Todas las anteriores\n: ");scanf("%s",&cf);
			if(cf[0]=='A' || cf[0]=='a'){
				printf("\nLa estatura mas alta es: %.2f", mayAll);
			}
			else if(cf[0]=='B' || cf[0]=='b'){
				printf("\nLa estatura mas alta entre los chicos es: %.2f", mayB);
			}
			else if(cf[0]=='C' || cf[0]=='c'){
				printf("\nLa estatura mas alta entre las chicas es: %.2f", mayG);
			}
			else if(cf[0]=='D' || cf[0]=='d'){
				printf("\nEl promedio de estatura de todos es: %.2f", promAll);
			}
			else if(cf[0]=='E' || cf[0]=='e'){
				printf("\nEl promedio de estatura de los chicos es: %.2f", promB);
			}
			else if(cf[0]=='F' || cf[0]=='f'){
				printf("\nEl promedio de estatura de las chicas es: %.2f", promG);
			}
			else if(cf[0]=='G' || cf[0]=='g'){
				printf("\nLa estatura mas alta es: %.2f", mayAll);
				printf("\nLa estatura mas alta entre los chicos es: %.2f", mayB);
				printf("\nLa estatura mas alta entre las chicas es: %.2f", mayG);
				printf("\nEl promedio de estatura de todos es: %.2f", promAll);
				printf("\nEl promedio de estatura de los chicos es: %.2f", promB);
				printf("\nEl promedio de estatura de las chicas es: %.2f", promG);
			}
			printf("\nMarque 1 para CONTINUAR --- Marque 2 para SALIR: ");scanf("%d",&opc2);
			printf("\n----------------------------------\n");
		}while(opc2==1);
		printf("\nMarque 1 para REINTENTAR --- Marque 2 para SALIR: ");scanf("%d",&opc1);
		printf("\n----------------------------------\n");
	}while(opc1==1);
	return 0;
}
