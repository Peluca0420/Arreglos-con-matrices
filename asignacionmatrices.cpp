#include <stdio.h>
#include<windows.h>

const int dim=100;
int i,j,filas,columnas;
float matriz1[dim][dim],matriz2[dim][dim]; 

	int main(void)
{
    		printf("SUMA DE MATRICES\n\n");
    		printf("Indique que tan grandes son las matrices:\n Filas:"); 
			scanf("%i", &filas);
    		printf(" Columnas: "); 
			scanf("%i", &columnas);
 
	//MATRIZ 1
    		system("cls");
			printf("DATOS DE LA MATRIZ 1");
    	for(i=1;i<=filas;i++)
{
        for(j=1;j<=columnas;j++)
{
        	printf("\n Introduzca el digito que esta en el par (%i,%i): ",i,j); 
			scanf("%f", &matriz1[i][j]);
}
}

	//MATRIZ 2   
			system("cls");    	
			printf("DATOS DE LA MATRIZ 2");
  		for(i=1;i<=filas;i++)
{
       	for(j=1;j<=columnas;j++)
{
        	printf("\n Ahora para la segunda matriz introduzca el digito que esta en el par (%i,%i): ",i,j); 
			scanf("%f", &matriz2[i][j]);
}
}
   
    	for(i=1;i<=filas;i++)
{
       	for(j=1;j<=columnas;j++) matriz1[i][j]=matriz1[i][j]+matriz2[i][j]; 
}
	//RESULTADO   
    		system("cls");
			printf("MATRIZ RESULTADO: \n");
    	for(i=1;i<=filas;i++)
{
        for(j=1;j<=columnas;j++) 
			printf("%10.0f",matriz1[i][j]);
        	printf("\n");
}
    	return 0;
}
