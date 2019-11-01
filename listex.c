#include <stdio.h>
#include <stdlib.h>



struct Lista 
{
    int id;
    struct Lista *proximo;
    
};

typedef struct Lista lista;




void inverte(lista *l1, lista *l2, lista *l3){
    l3->proximo = l1;



}

void criar(lista *raiz, int i){


        lista *novo = (lista*) malloc(sizeof(lista*));
        novo->proximo = NULL;
        novo->id = i;
        novo->proximo = raiz->proximo;
        raiz->proximo = novo;

}


void letra_a(lista *raiz){

    lista *ultimo = raiz->proximo;
    lista *primeiro = raiz->proximo;
    raiz->proximo = primeiro->proximo;
    while(ultimo->proximo){
        ultimo = ultimo->proximo;
    }

    ultimo->proximo = primeiro;
    primeiro->proximo = NULL;
}

void letra_b(lista *raiz,int i){

    lista *novo = (lista*) malloc(sizeof(lista*));
    novo->proximo = NULL;
    novo->id = i;
    novo->proximo = raiz->proximo;
    raiz->proximo = novo;
}


void displayLL(lista *l1)
{
    l1 = l1->proximo;  
    printf("Mostrando a lista:\n"); 
    if(l1)
    {
        do
        {
            printf(" %d", l1->id);
            l1=l1->proximo;
        }
        while(l1);
        printf("\n\n");
    }
    else
        printf("Lista vazia.");
}


void percorrer(lista *l1, lista *raiz){
    if(l1)
    {
        do
        {
            l1=l1->proximo;
        }
        while(l1);



    l1->proximo = raiz;
    raiz->proximo = NULL;
    }
}


void letra_c(lista *C, lista *res){
    lista *ultimo = C->proximo;
    lista *primeiro = C->proximo;
    C->proximo = primeiro->proximo;
    lista *novo = NULL;
    novo = (lista*) malloc(sizeof(lista*));
    res->proximo = novo;

    while(ultimo->proximo){
        ultimo = ultimo->proximo;
    }




}



void copias(lista *raiz, int i){
    lista *novo = (lista*) malloc(sizeof(lista*));
    novo->proximo = NULL;
    novo->id = i;
    novo->proximo = raiz->proximo;
    raiz->proximo = novo;
}

int main(){

    lista *raiz = NULL;
    raiz = (lista*) malloc(sizeof(lista*));
    raiz->proximo = NULL;
    raiz->id = 0;

    lista *A = NULL;
    A = (lista*) malloc(sizeof(lista*));

    lista *B = NULL;
    B = (lista*) malloc(sizeof(lista*));

    lista *C = NULL;
    C = (lista*) malloc(sizeof(lista*));

    lista *res = NULL;
    res = (lista*) malloc(sizeof(lista*));



    int choice;
    printf("\t Digite um número par de nós que serão criados na lista: \n");
    scanf("%d", &choice);
    for(int i=choice; i>0; i--)
    {
        criar(A,i);

    }
    printf("Mostrando a lista inicial:\n");
    displayLL(A);
    printf("LETRA A\n");
    letra_a(A);
    displayLL(A);

    // LETRA B

    for(int i=1; i<=choice; i++)
    {
        letra_b(B,i);

    }
    printf("LETRA B\n");
    displayLL(B);

    // LETRA C
    printf("LETRA C\n");





    





    







    return 0;
}