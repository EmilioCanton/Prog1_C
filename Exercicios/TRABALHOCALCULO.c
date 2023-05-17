//Nome da Dupla: Emilio Canton e Fernando Veizaga

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pessoa{						//Cria��o de uma struct, de nome "pessoa"
    char nome[50], cpf[12];				//Declara��o de strings para armazenar nome e CPF
    int dia, mes, ano;					//Declara��o de vari�veis do tipo inteiro, para armazenar a data de nascimento
};

void preencher(struct pessoa *p1){			//Cria��o do procedimento "preencher", que recebe como par�metro o endere�o da vari�vel "pes", armazenado no ponteiro "pont"
    gets(p1->nome);					//Utiliza��o da fun��o "gets()" para leitura da string "nome"
    scanf("%d", &p1->dia);				//Leitura de um n�mero inteiro inserido pelo usu�rio, que ser� armazenado na vari�vel "dia"
    scanf("%d", &p1->mes);				//Leitura de um n�mero inteiro inserido pelo usu�rio, que ser� armazenado na vari�vel "mes"
    scanf("%d", &p1->ano);				//Leitura de um n�mero inteiro inserido pelo usu�rio, que ser� armazenado na vari�vel "ano"
    getchar();						//Utiliza��o da fun��o "getchar" para limpeza do buffer do teclado
    gets(p1->cpf);					//Utiliza��o da fun��o "gets()" para leitura da string "cpf"
}

void exibir(struct pessoa *p2){				//Cria��o do procedimento "exibir", que recebe como par�metro o endere�o da vari�vel "pes", armazenado no ponteiro "pont"
    printf("%s\n", p2->nome);				//Exibi��o do conte�do da vari�vel "nome"
    printf("%d / %d / %d\n", p2->dia, p2->mes, p2->ano);		//Exibi��o das vari�veis "dia", "nome" e "ano", compondo a data de nascimento
    printf("%s\n", p2->cpf);				//Exibi��o do conte�do da vari�vel "cpf"
}

int main()
{
    struct pessoa pes;					//Declara��o da vari�vel "pes", do tipo pessoa
    struct pessoa *pont;				//Declara��o do ponteiro "pont", para structs do tipo pessoa
    pont = &pes;					//Recebimento do endere�o da struct "pes" pelo ponteiro "pont"
    preencher(pont);					//Chamada do procedimento "preencher", que passa como par�metro o conte�do do ponteiro "pont"
    exibir(pont);					//Chamada do procedimento "exibir", que passa como par�metro o conte�do do ponteiro "pont"

    return 0;
}
