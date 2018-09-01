#include <stdio.h>

int main() {
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
    printf("MATRIZ A");
    for (fil = 0; fil < filas; fil++) {
        printf("\n");
        for (col = 0; col < columnas; col++) {
            printf("%d  ",a[fil][col]);
        }
    }
    
    printf("\nMATRIZ B");
    for (fil = 0; fil < filas; fil++) {
//        printf("\n");
        for (col = 0; col < columnas; col++) {
            b[col][fil]=a[fil][col];
        }
    }
    for (fil = 0; fil < filas; fil++) {
        printf("\n");
        for (col = 0; col < columnas; col++) {
            printf("%d  ",b[fil][col]);
        }
    }
    printf("\n");
    return 0;
}
