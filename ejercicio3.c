#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion,largo,agregar,posagg,buscar,cuenta_busca=0,eliminar,editar,posedit;
    int vector[500];
    printf("Ingrese el largo del vector\n");
    scanf("%d",&largo);

    
    //SE INGRESA EL VECTOR
    printf("Ingrese el vector\n");
    int j;
    for (j = 0; j < largo; j++) {
        printf("Posicion %d: ",j+1);
        scanf("%d",&vector[j]);
    }
    //SE MOSTRARA EL VECTOR
    printf("\nEl vector es:\n");
    int i;
    for (i = 0; i < largo; i++) {
        printf("%d ",vector[i]);
    }
    
    //SE CREARA EL MENU
    opcion=20;
    while (opcion!=0) {
        printf("\n\n\n  MENU\n");
        printf("Que desea hacer con el vector\n");
        printf("1. Agregar un dato\n2. Buscar un dato\n3. Editar un dato\n5. Eliminar un dato\n0.Salir\n");
        scanf("%d",&opcion);
        
        switch (opcion) {
            case 1:
              //agregara un dato
                printf("Posicion donde desea agregar el dato nuevo\n");
                scanf("%d",&posagg);
                posagg=posagg-1;
                printf("Ingrese el nuevo dato\n");
                scanf("%d",&agregar);
                if (posagg<largo) {
                    int j;
                    for (j = largo; j >posagg; j--) {
                        vector[j]=vector[j-1];
                        
                    }
                    vector[posagg]=agregar;
                }else{
                    vector[largo]=agregar;
                }
                largo=largo+1;
                
                //SE MOSTRARA EL VECTOR CON EL NUEVO VALOR
                printf("El vector con el nuevo dato es: \n");
                for (j = 0; j < largo; j++) {
                    printf("%d ",vector[j]);
                }
                break;
                
                
            case 2:
              //BUSCA UN VALOR EN EL VECTOR
                printf("Ingrese el dato a buscar\n");
                scanf("%d",&buscar);  
                
                for (i = 0; i < largo; i++) {
                    if (vector[i]==buscar) {
                        printf("El numero %d se encuentra en la posicion %d\n",buscar,i+1);
                        cuenta_busca=cuenta_busca+1;
                    }
                }
                printf("EL numero %d se encuentra %d veces en el vector",buscar,cuenta_busca);
                cuenta_busca=0;
                break;
                
            case 3:
            //EDITA EL VECTOR
                printf("Posicion del numero que quiere editar:\n");
                scanf("%d",&posedit);
                while (posedit>largo || posedit<0) {
                    printf("Ingrese una poscion valida\n");
                    printf("Posicion del numero que quiere editar:\n");
                    scanf("%d",&posedit);
                }
                printf("Numero nuevo a agregar\n");
                scanf("%d",&editar);
                posedit=posedit-1;
                vector[posedit]=editar;
                //MOSTRAR EL VECTOR CON LOS DATOS EDITADOS
                 printf("El vector con los datos editados es: \n");
                 int az;
                for (az = 0; az < largo; az++) {
                    printf("%d ",vector[az]);
                }
                break;
                
            case 5:
            //ELIMINARA UN DATO
                printf("Ingrese el dato que desea eliminar:\n");
                scanf("%d",&eliminar);
                int i;
                for (i = 0; i < largo; i++) {
                    if (vector[i]==eliminar) {
                        vector[i]=0;
                    }
                }
                printf("Vector con datos eliminado\n");
                for (i = 0; i < largo; i++) {
                    printf("%d ",vector[i]);
                }

                break;
            default:
                printf("Seleccione una opcion del Menu\n");
                break;
        }
    }
    return 0;
}
