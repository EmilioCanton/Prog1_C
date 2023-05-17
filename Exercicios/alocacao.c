#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int *p;
   int *v = malloc(200); // cria um array de 50 inteiros 200 bytes
   char *c = malloc(200); // cria um array de 200 char com 200 bytes
   free(v);
   free(c);

   v = calloc(50,4); // cria um vetor com 50 inteiros de tamanho 4 bytes cada
   c = calloc(200,1); // criaum array de 200 char com 1 byte cada
   free(v);
   v = (int*)calloc(50,sizeof(int)); // cria um array com 50 ineteiros com o tamanho de 1 inteiro para cada espaço

   v = (int*)realloc(v,400); // redefiniu a reserva de v de 200 bytes para 400 cabendo 100 ints
   c = (char*)realloc(c,400); // redefiniu a reserva de c de 200 bytes para 400 cabendo 400 chars
   //usando a melhor forma agora:
   v = (int*)realloc(v,100*sizeof(int));
   c = (char*)realloc(c,400*sizeof(char));
    //igualdades agora

    p = (int*) realloc(NULL, 50*sizeof(int)); // equivalente a p = (int*) malloc(50*sizeof(int));
    p = (int*) realloc(p,0); // equivalente a free(p)
    p = (int*) malloc(50*sizeof(int)); // equivalente a p = (int*) realloc(NULL, 50*sizeof(int));

    int **multi;// 2 niveis 2 dimensoes
    int i,j, N = 2;
    //criando um array de poonteiros int*:
    multi = (int**)malloc(N * sizeof(int*));
    for(i=0; i<N; i++)
    {
        //criar um array de int
        multi[i] = (int*)malloc(N * sizeof(int));
        for(j=0; j<N; j++)
        {
            scanf("%d",&multi[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
        {
            printf("%d ",multi[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<N;i++)
    {
        free(p[i]);
    }
    free(p);





    system("pause");
    return 0;
}
