#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo1=NULL;
    char buffer[100];
    double pi;
    int mult, aux;
    int buffer1[100];
    archivo=fopen("vector.txt","r+");
    archivo1=fopen("mutliplicacion.txt","w");
    
    if (archivo==NULL){
           if (archivo1==NULL){
        printf("No se puede abrir el archivo");
        return -1;
        }
    }
    while(!feof(archivo)){
        fscanf(archivo,"%d",&mult);
        aux=mult*3;
        fprintf(archivo1,"%d\n",aux);
    }
     fclose(archivo);
      fclose(archivo1);
}