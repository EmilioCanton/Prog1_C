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

char *atribui(int pos,char final[],char texto1[]){

    int i,x=pos;

    for(int i = pos; (texto1[i]!='\0') && ((texto1[i]>=65 && texto1[i]<=90) || (texto1[i]>=97 && texto1[i]<=122));i++){

        final[x]  = texto1[1];
    }

    return final;

}

char *retiraPalavra(char texto1[], char texto2[]){

    int i,j,valorI,verifica =0,x=0;
    char *final;

    final = (char*) malloc(sizeof(char)*101);


    for(i=0;texto1[i] != '\0';i++){

        if(texto1[i] == texto2[0]){
            valorI = i;
            verifica =0;
            if(confereTamanho(i,texto1)== strlen(texto2)){
                for(j=0;texto2[j]!= '\0';j++){

                    if(texto2[j]!= texto1[i]){
                        verifica = 1;
                        break;
                    }
                    i++;
                }

                if(verifica!= 0){
                    atribui(i,final,texto1);
                    i = valorI;
                }
            }
        }

        final[x] = texto1[i];
        x++;
    }
    final[x] = '\0';

    //printf("%s\n", final);
    return final;
}


int main(){

    char texto1[101] = {"passatempo passa o tempo como um passatempo que passa"};
    char texto2[101] = {"passa"};
    //printf("%s\n %s", texto1,texto2);

    printf("%s",retiraPalavra(texto1,texto2));

}
