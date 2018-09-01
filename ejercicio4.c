#include <stdio.h>

void main() {
    int fil,col,filas,columnas;
    printf("Ingrese el numero de filas\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d",&columnas);
    int a[filas][columnas];
    int b[filas][columnas];
     
    printf("Ingrese la matriz A\n");
    for (fil = 0; fil < filas; fil++) {
        for (col = 0; col < columnas; col++) {
            printf("Numero (%d,%d): ",fil,col);
            scanf("%d",&a[fil][col]);
        }
    }
    printf("\nMATRIZ A");
    for (fil = 0; fil < filas; fil++) {
        printf("\n");
        for (col = 0; col < columnas; col++) {
            printf("%d  ",a[fil][col]);
        }
    }
    
 col=1;
 int suma=0;
 printf("\n\nLa diagonal con pendiente positiva es:\n");
    for (fil = 0; fil < filas; fil++) {
        printf("%d\t", a[fil][columnas-col]);
        suma=suma+a[fil][columnas-col];
        col=col+1;
    }
 printf("\nY su suma es: %d",suma);

 
 col=0;
suma=0;
 printf("\n\nLa diagonal con pendiente negativa es:\n");
    for (fil = 0; fil < filas; fil++) {
        printf("%d\t", a[fil][col]);
        suma=suma+a[fil][col];
        col=col+1;
    }
 printf("\nY su suma es: %d\n",suma);
 
 
  col=0;
suma=0;
    for (fil = 0; fil < filas; fil++) {
        printf("\nLos números de la fila %d son:\n",fil+1);
        for (col = 0; col < columnas; col++) {
         printf("%d\t", a[fil][col]);
        suma=suma+a[fil][col];
        }
         printf("\nY la suma es: %d\n",suma);

    }


    col = 0;
    suma = 0;
    for (col = 0; col < columnas; col++) {
        printf("\nLos números de la columna %d son:\n", col + 1);
        for (fil = 0; fil < filas; fil++) {
            printf("%d\t", a[fil][col]);
            suma = suma + a[fil][col];
        }
        printf("\nY la suma es: %d\n", suma);

    }

}
