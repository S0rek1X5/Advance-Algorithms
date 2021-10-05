#include <stdio.h>
int main()
{
	float sumaAll=0,sumaB=0,sumaG=0,promAll,promB,promG,mayB=0,mayG=0,mayAll=0,chico,chica;
	int opc1,opc2,i,cant1,cant2;
	char cf[13];
	do{
		printf("------WELCOME------\nIntroduce your data\n\n");
		printf("Type the amount of boy students: ");scanf("%d",&cant1);
		printf("Type the amount of girl students: ");scanf("%d",&cant2);
		printf("------\n");
		printf("Boys\n");
		for(i=0;i<cant1;i++){
			printf("Type the stature of the student %i: ",i+1);scanf("%f",&chico);
			sumaB += chico;
			promB=sumaB/cant1;
			if(chico>mayB){
				mayB=chico;
			}
		}
		printf("------\n");
		printf("Girls\n");
		for(i=0;i<cant2;i++){
			printf("Type the stature of the student %i: ",i+1);scanf("%f",&chica);
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
			printf("\nWhat you want to know?");
			printf("\nA---Taller stature\nB---Taller stature BOY\nC---Taller stature Girl\nD---Average stature of all\nE---Average stature of boys\nF---Average stature of girls\nG---All of the aboves\n: ");scanf("%s",&cf);
			if(cf[0]=='A' || cf[0]=='a'){
				printf("\nThe tallest stature is: %.2f", mayAll);
			}
			else if(cf[0]=='B' || cf[0]=='b'){
				printf("\nThe tallest stature among boys is: %.2f", mayB);
			}
			else if(cf[0]=='C' || cf[0]=='c'){
				printf("\nThe tallest stature among girls is: %.2f", mayG);
			}
			else if(cf[0]=='D' || cf[0]=='d'){
				printf("\nThe average stature of all is: %.2f", promAll);
			}
			else if(cf[0]=='E' || cf[0]=='e'){
				printf("\nThe average stature of boys is: %.2f", promB);
			}
			else if(cf[0]=='F' || cf[0]=='f'){
				printf("\nThe average stature of girls is: %.2f", promG);
			}
			else if(cf[0]=='G' || cf[0]=='g'){
				printf("\nThe tallest stature is: %.2f", mayAll);
				printf("\nThe tallest stature among boys is: %.2f", mayB);
				printf("\nThe tallest stature among girls is: %.2f", mayG);
				printf("\nThe average stature of all is: %.2f", promAll);
				printf("\nThe average stature of boys is: %.2f", promB);
				printf("\nThe average stature of girls is: %.2f", promG);
			}
			printf("\nType 1 to CONTINUE --- Type 2 to EXIT: ");scanf("%d",&opc2);
			printf("\n----------------------------------\n");
		}while(opc2==1);
		printf("\nType 1 to RETRY --- Type 2 to EXIT: ");scanf("%d",&opc1);
		printf("\n----------------------------------\n");
	}while(opc1==1);
	return 0;
}
