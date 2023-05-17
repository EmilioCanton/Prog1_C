#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f;
    char nome[20];
    int ok=0;
    printf("Digite o nome do arquivo: \n");
    gets(nome);
    f = fopen(nome, "r+");
    if(f == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
    long int tam;
    int i=0, x=0, y=0, controle=0, z=0,cont=0;
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
    while(i<tam+1)
    {
        y=i;
        for(x=0; x<strlen(palavra); x++)
        {
            printf("texto = %c\npalavra = %c\n\n\n\n\n\n",texto[y],palavra[x]);
            if(texto[y] == palavra[x])
            {

                cont++;
            }


            if (x==strlen(palavra)-1)
            {
                if (cont!=strlen(palavra))
                {
                    printf("x = %d\ncont = %d\nstrlen= %d\n",x,cont,strlen(palavra));
                    aux[z]=texto[i];
                    z++;
                }
                cont=0;


            }
            y++;

        }

        i++;

    }

    printf("\n%s \n",aux);
    printf("%d\n",strlen(palavra));






    fclose(f);


    return 0;
}
