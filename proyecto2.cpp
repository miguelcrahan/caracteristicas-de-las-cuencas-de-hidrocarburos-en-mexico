#include<stdio.h>
#include<windows.h>
int x=0,y=0,repetir;
FILE *Datos;
char nombre[100];
int main() {
	Datos=fopen("informacion.txt","a+t");	
	do{
		printf("                                            \"Cuencas de hidrocarburo en mexico\"                                        ");	
		
		printf("\n\nIngrese s%clo su nombre:\t",162);
    	scanf("%s",nombre);
		do
		{
			fputs(nombre, Datos);
		
			printf("\nZonas petroleras en mexico\n\n");
			fprintf(Datos,"\nZonas petroleras en mexico\n\n");
			printf("Cual de las zonas deseas conocer?\n");
			printf("1) norte\n");
			printf("2) centro\n");
			printf("3) sur\n");
			scanf("%d", &x);
				switch(x)
				{
					case 1:
						printf("Datos de la cuenca de sabinas y burgos, cuenta con fallas normales de tipo elistrica.\n La mayoria del tipo de hidrocarburo de la cuenca es de gas y lo compone en su mayoría rocas cretacicas y del cenozoico.\n\n");
						fprintf(Datos,"Datos de la cuenca de sabinas y burgos, cuenta con fallas normales de tipo elistrica.\n La mayoria del tipo de hidrocarburo de la cuenca es de gas y lo compone en su mayoría rocas cretacicas y del cenozoico.\n\n");
					break;
					case 2:
						printf("Datos de la cuenca de tampico Misantla, abarca las zonas de Tamaulipas y centro de Veracruz cuenta con fallas de tipo inversa y antiteticas,en esta zona se encuentra la faja de oro y el atolon de Chiltepec.\n En su mayoria el hidrocarburo que predomina es el aceite, y sus rocas pertenecen a la era cretacica y la terciaria.\n\n" );
						fprintf(Datos,"Datos de la cuenca de tampico Misantla, abarca las zonas de Tamaulipas y centro de Veracruz cuenta con fallas de tipo inversa y antiteticas,en esta zona se encuentra la faja de oro y el atolon de Chiltepec.\n En su mayoria el hidrocarburo que predomina es el aceite, y sus rocas pertenecen a la era cretacica y la terciaria.\n\n" );
					break;
					case 3:
						printf("¿Deseas conocer informacion de Veracruz o del sureste?\n");
						printf("4) veracruz\n");
						printf("5) suroeste\n");
						scanf("%d", &y);
						if(y!=5)
						{
							printf("Datos de la cuenca de Veracruz, se encuentra al sur del estado de Veracruz, dividida por la faja de oro, las fallas que se encuentran en esta cuenca son de tipo inversas, causadas por fenomenos compresivos, genera en su mayoria gas, la mayoria de sus pozos son terrestres, en esta cuenca se encuentran grandes trampas de sal, que funcionan como roca sello y ocasiona el entrampamiento, lo que ayuda al hidrocarburo.\n Esta sal proviene del jurasico medio caloviano, mientras que la mayoria de sus rocas son de tipo terciario.\n\n");
							fprintf(Datos,"Datos de la cuenca de Veracruz, se encuentra al sur del estado de Veracruz, dividida por la faja de oro, las fallas que se encuentran en esta cuenca son de tipo inversas, causadas por fenomenos compresivos, genera en su mayoria gas, la mayoria de sus pozos son terrestres, en esta cuenca se encuentran grandes trampas de sal, que funcionan como roca sello y ocasiona el entrampamiento, lo que ayuda al hidrocarburo.\n Esta sal proviene del jurasico medio caloviano, mientras que la mayoria de sus rocas son de tipo terciario.\n\n");
				 		}
							else
						{
						
								printf(" Datos de la cuenca del sureste y el cinturon plegado, se divide en 4 zonas.\n Mega cuenca salina del istmo contiene gran cantidad de sal, que proviene del jurasico medio caloviano, y el tipo de roca que predomina es de origen mesozoico.\nCuenca de Macuspana, en su mayoria cuenta con rocas cenozoica.\nCuenca de Comalcalco, en su mayoria cuenta con rocas cenozoica.\nPilar de reforma-Akal, de ahí viene el 70% del petroleo de Mexico, en esta zona se tiene toda la columna geologica.Esta cuenca se divide 50% terrestre y 50% marina, en su mayoria estas zonas y la cuenca en general produce aceites.\n\n");
								fprintf(Datos," Datos de la cuenca del sureste y el cinturon plegado, se divide en 4 zonas.\n Mega cuenca salina del istmo contiene gran cantidad de sal, que proviene del jurasico medio caloviano, y el tipo de roca que predomina es de origen mesozoico.\nCuenca de Macuspana, en su mayoria cuenta con rocas cenozoica.\nCuenca de Comalcalco, en su mayoria cuenta con rocas cenozoica.\nPilar de reforma-Akal, de ahí viene el 70% del petroleo de Mexico, en esta zona se tiene toda la columna geologica.Esta cuenca se divide 50% terrestre y 50% marina, en su mayoria estas zonas y la cuenca en general produce aceites.\n\n");
						}
					break;
					default:
						printf("datos invalidos\n");
				}
			}while(x!=1 && x!=2 && x!=3);
	
	fprintf(Datos,"datos obtenidos de %d,%d\n\n",x,y);
		printf("\n\n¿Quieres volver a intentarlo?     (1)S%c    \t\n",161);
		scanf("%d",&repetir);
		system("cls");
	}while(repetir==1);
	
	fclose(Datos);
	
	getchar ();
	getchar ();
	return 7;
}


