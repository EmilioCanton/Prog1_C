//Nome da Dupla: Emilio Canton e Fernando Veizaga

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pessoa{						//Criação de uma struct, de nome "pessoa"
    char nome[50], cpf[12];				//Declaração de strings para armazenar nome e CPF
    int dia, mes, ano;					//Declaração de variáveis do tipo inteiro, para armazenar a data de nascimento
};

void preencher(struct pessoa *p1){			//Criação do procedimento "preencher", que recebe como parâmetro o endereço da variável "pes", armazenado no ponteiro "pont"
    gets(p1->nome);					//Utilização da função "gets()" para leitura da string "nome"
    scanf("%d", &p1->dia);				//Leitura de um número inteiro inserido pelo usuário, que será armazenado na variável "dia"
    scanf("%d", &p1->mes);				//Leitura de um número inteiro inserido pelo usuário, que será armazenado na variável "mes"
    scanf("%d", &p1->ano);				//Leitura de um número inteiro inserido pelo usuário, que será armazenado na variável "ano"
    getchar();						//Utilização da função "getchar" para limpeza do buffer do teclado
    gets(p1->cpf);					//Utilização da função "gets()" para leitura da string "cpf"
}

void exibir(struct pessoa *p2){				//Criação do procedimento "exibir", que recebe como parâmetro o endereço da variável "pes", armazenado no ponteiro "pont"
    printf("%s\n", p2->nome);				//Exibição do conteúdo da variável "nome"
    printf("%d / %d / %d\n", p2->dia, p2->mes, p2->ano);		//Exibição das variáveis "dia", "nome" e "ano", compondo a data de nascimento
    printf("%s\n", p2->cpf);				//Exibição do conteúdo da variável "cpf"
}

int main()
{
    struct pessoa pes;					//Declaração da variável "pes", do tipo pessoa
    struct pessoa *pont;				//Declaração do ponteiro "pont", para structs do tipo pessoa
    pont = &pes;					//Recebimento do endereço da struct "pes" pelo ponteiro "pont"
    preencher(pont);					//Chamada do procedimento "preencher", que passa como parâmetro o conteúdo do ponteiro "pont"
    exibir(pont);					//Chamada do procedimento "exibir", que passa como parâmetro o conteúdo do ponteiro "pont"

    return 0;
}
