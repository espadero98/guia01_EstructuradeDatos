#include <stdio.h>
#include <stdlib.h>
int main() {
	int filas1,columnas1,filas2,columnas2;
	int fil=0,col=0,aux=0;
	int i=0,j=0,h=0;
	printf("Numero de filas que tendra la matriz 1: \n");
	scanf("%d",&filas1);
	printf("Numero de columnas que tendra la matriz 1: \n");
	scanf("%d",&columnas1);
	printf("Numero de filas que tendra la matriz 2: \n");
	scanf("%d",&filas2);
	printf("Numero de columnas que tendra la matriz 2: \n");
	scanf("%d",&columnas2);
	
	int matriz1[filas1][columnas1];
	int matriz2[filas2][columnas2];
    int matriz_resultante[filas1][columnas2];
    
    //LLENANDO MATRIZ 1
    printf("Ingrese la matriz 1:\n");
    for(fil=0; fil< filas1; fil++)
    {
		for(col=0; col< columnas1; col++)
		{
			printf("Posicion (%d,%d): ",fil,col);
			scanf("%d",&matriz1[fil][col]);
			
		}	
	}
	
	//LLENANDO MATRIZ 2
	printf("Ingrese la matriz 2:\n");
    for(fil=0; fil< filas2; fil++)
    {
		for(col=0; col< columnas2; col++)
		{
			printf("Posicion (%d,%d): ",fil,col);
			scanf("%d",&matriz2[fil][col]);
		}	
	}
	
	//MOSTRAR MATRIZ 1
	printf("\n Matriz 1:\n"); 
	        for(int fil=0;fil<filas1;fil++)
	        {
	            printf("[ ");
	            for(int col=0;col<columnas1;col++)
	            {
	                printf("%d ",matriz1[fil][col]);
				}
	            printf("]");
	            printf("\n");
	        }
	//MOSTRAR MATRIZ 2 
	printf("\n Matriz 2:\n"); 
	        for(int fil=0;fil<filas2;fil++)
	        {
	            printf("[ ");
	            for(int col=0;col<columnas2;col++)
	            {
	                printf("%d ",matriz2[fil][col]);
				}
	            printf("]");
	            printf("\n");
	        }       
	        
	//CREARA LA MATRIZ RESULTANTE
	if(columnas1==filas2)
	{
			    printf("La matriz resultante es: \n");
 
	            for(int i=0;i<filas1;i++)
	            {
	            	printf("[ ");
 
					for(int j=0;j<columnas2;j++)
					{
						matriz_resultante[i][j]=0;
						for(int h=0;h<columnas1;h++)
						{
							//mR[i][j]=mR[i][j]+(m1[i][h]*m2[h][j]);
							//matriz_resultante[fil][col]+=matriz1[fil][aux]*matriz2[aux][col];
							matriz_resultante[i][j]=matriz_resultante[i][j]+(matriz1[i][h]*matriz2[h][j]);
						}
						printf("%d ",matriz_resultante[i][j]);
					}
					printf("]");
					printf("\n");
				}
	}
	else
	{
		printf("Las matrices deben ser cuadradas");
	}        
    return 0;
    
 }   
