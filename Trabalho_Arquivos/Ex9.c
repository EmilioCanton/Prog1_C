#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int confereTamanho(int pos,char texto1[]){//passa tempo

    int i,contador=0;
    for(i=pos;(texto1[i]!='\0') && ((texto1[i]>=65 && texto1[i]<=90) || (texto1[i]>=97 && texto1[i]<=122)) ; i++ ){
        contador++;
    }

    return contador;
}


char *retiraPalavra(char texto1[], char texto2[]){

    int i,j,x=0;
    char *final;
    int tamanhoAhcomparar,verificaTamanho,posicaoDoI;

    final = (char*) malloc(sizeof(char)*101);


    for(i=0;texto1[i] != '\0';i++){

        if(texto1[i] == texto2[0]){
            posicaoDoI = i;
            tamanhoAhcomparar  = confereTamanho(i,texto1);
            verificaTamanho = 0;
            if(tamanhoAhcomparar == strlen(texto2)){
                verificaTamanho=1;
                for(j=0;texto2[j]!= '\0';j++){

                    if(texto2[j]!= texto1[i]){
                        break;
                    }
                    i++;
                }


            }
            if(verificaTamanho==0){
                for(i=posicaoDoI;i<(posicaoDoI+tamanhoAhcomparar);i++){
                    final[x] = texto1[i];
                    x++;
                }
            }
        }


        final[x] = texto1[i];
        x++;


    }
    final[x] = '\0';

    return final;
}


int main(){

    char texto1[101] = {"passapassa."};
    char texto2[101] = {"passa"};

    printf("%s",retiraPalavra(texto1,texto2));

}
