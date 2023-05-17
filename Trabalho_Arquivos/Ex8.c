#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f;
    char nome[20];
    printf("Digite o nome do arquivo: \n");
    gets(nome);
    f = fopen(nome, "r+");
    if(f == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
    long int tam;
    int i=0, x=0, y=0, controle=0, z=0;
    fseek(f, 0, SEEK_END);
    tam = ftell(f);
    rewind(f);
    char str[tam+1], palavra[50], *texto = fgets(str, tam+1, f);
    if(texto == NULL){
        printf("Erro\n");
    }
    printf("%s\n", texto);

    char aux[tam+1];
    printf("Digita a palavra a ser apagada: \n");
    gets(palavra);
    while(i<tam+1){
        //printf("%c %c\n", texto[i], palavra[0]);
        if(texto[i] == palavra[0]){
            y = i;
            for(x=0; x<strlen(palavra); x++){
                if(texto[y]!=palavra[x]){
                    //printf("entrou2\n");

                    break;
                }
                if(x==strlen(palavra)-1){
                    //printf("entrou\n");
                    i+=strlen(palavra);
                    controle=1;
                    break;
                }
                y++;
            }
        }

        if(controle == 0){
            i++;
        }
        else{
            controle = 0;
        }
        if(texto[i]!=palavra[0]){
            aux[z]=texto[i];
            z++;
        }
    }

    fclose(f);

    printf("%s\n", aux);


    return 0;
}




