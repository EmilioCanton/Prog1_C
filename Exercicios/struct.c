#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    int idade;
};
int main()
{
    int i,k;
    printf("Qual o numero de pessoas que voce deseja cadastrar?\n");
    scanf("%d",&k);
    getchar();
    struct pessoa p[k];
    for (i=0; i<k; i++)
    {
        printf("Digite o nome da pessoa %d\n",i+1);
        gets(p[i].nome);
        printf("Digite a idade da pessoa %d\n",i+1);
        scanf("%d",&p[i].idade);
        getchar();
    }
    for(i=0; i<k; i++)
    {
        printf("Nome: %s\nIdade: %d\n",p[i].nome,p[i].idade);
    }

    system("pause");
    return 0;
}
