#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("arquivo.txt","r");
    if(f==NULL)
    {
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    char texto[20], nome[20];
    int idade;
    float peso;
    fscanf(f,"%s %s",texto,nome);
    printf("%s %s\n",texto,nome);
    fscanf(f,"%s %d",texto,&idade);
    printf("%s %d\n",texto,idade);
    fscanf(f,"%s %f",texto,&peso);
    printf("%s %.2f\n",texto,peso);



    fclose(f);
    system("pause");
    return 0;
}
