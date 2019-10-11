#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Paciente{
    char nome[50];
    int id;
    struct Paciente *proximo;
};

typedef struct Paciente pac;

void displayLL(pac *p)
{
    printf("Mostrando a lista:\n"); 
    if(p)
    {
        do
        {
            printf("%d", p->id);
            printf("%s", p->nome);
            p=p->proximo;
        }
        while(p);
        printf("\n");
    }
    else
        printf("Lista vazia.");
}

void inserir_inicio(pac *raiz){
    pac *pac0 = NULL;
    pac0 = (pac*) malloc(sizeof(pac*));
    pac0->id = 0;
    pac0->proximo = raiz;
}

void inserir_fim(pac *anterior, pac *inserir, pac *proximo){

}

void inserir_fim()



int main(){

    //criando e associando a raíz da lista

    pac *pac1 = NULL;
    int choice;
    int cont;
    int check = 1;

    pac1 = (pac*) malloc(sizeof(pac*));
    pac1->id = 1;
    pac1->proximo = NULL;

    printf("\tBem vindo ao consultório do Doutor Fagundes!\n");
    printf("\t---------------------------------------------\n");
    do{

    
    printf("\tDigite 1 para inserir um paciente na lista!\n");
    printf("\tDigite 2 para desistir da consulta!\n");
    
    cont++;
    scanf("%d", &choice);
    if (choice==1){
        //criar e inserir funçao
        int c;
        printf("\t(1) para inserir no primeiro na fila\n");
        printf("\t(2) para inserir no meio da fila\n");
        printf("\t(3) para inserir no final da fila\n");
        scanf("%d", &c);

        if (c==1){
            //funçao começo
            inserir_inicio(pac1);
            printf("\tNome do paciente: \n");
            char nome[50];
            scanf("%s", &nome[50]);
            //strcpy(pac1->nome, nome);
            displayLL(pac1);
            
        }

        if (c==2){
            //funçao meio
        }

        if (c==3){
            //funçao final
        }
    }


    


        if(choice==2){
        //remover e dar free no paciente
        }
    }
    while(check == 1);






































    return 0;
}