#include<stdio.h>
#include<stdlib.h>
float *criar(int tam){
    return (float *)malloc(tam*sizeof(float));
}
void preencher(float *vet, int tam){
    for(int i=0;i<tam;i++){
        scanf("%f", &vet[i]);
    }
}
void imprimir(float *vet, int tam, float med){
    int s;
    s=vet[0];
    printf("{ %d", s);
    for (int i=1; i < tam; i++){
        s=vet[i];
        printf(", %d", s);    
    } 
    printf(" } => media = %.1f", med); 
} 

float media(float *vet,int tam){
    float med=0;
    for (int i=0; i < tam; i++){
        med=med+vet[i];
    }
    med = med/tam;
    return med;
}
int main() {
    float *vet, med;
    int tam;
    scanf("%d", &tam);
    vet = criar(tam);
    preencher(vet, tam);
    med = media(vet, tam);
    imprimir(vet, tam, med);
    /*
    s=vet[0];
    printf("{ %d", s);
    for (int i=1; i < tam; i++){
        s=vet[i];
        printf(", %d", s);    
    } 
    printf(" } => media = %.1f", med);
    */
    free(vet);
    return 0;
}