//Discente Artur Guilherme 
#include<stdio.h> 

int main(){

    char str[100] = "Preciso de um emprego que me pague 3k";
    int result;
    FILE *arq;
    arq = fopen("ArqGrav.txt", "w");
    if(arq == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
    }
    result = fputs(str,arq);
    if( result == EOF){
        printf("Erro na gravação\n");
    }
    fclose(arq);

    return 0;

}