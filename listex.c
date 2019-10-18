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

void criar(lista *l1, int i){


        lista *list = NULL;
        list = (lista*) malloc(sizeof(lista*));
        
        if(i==0){
            l1->proximo = list;   
        }
    if(l1)
    {
        
        for(int j=0; j<i; j++)
        {
            l1=l1->proximo;


        }
        
        
        

    }


        
        list->proximo = NULL;
        list->id = i + 1;
        printf(" %d\n", list->id);
    
     
        
    
}

void displayLL(lista *l1)
{
    printf("Mostrando a lista:\n"); 
    if(l1)
    {
        do
        {
            printf(" %d", l1->id);
            l1=l1->proximo;
        }
        while(l1);
        printf("\n");
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


int main(){

    lista *l1 = NULL;
    l1 = (lista*) malloc(sizeof(lista*));
    l1->proximo = NULL;
    l1->id = 0;



    int c;
    printf("\t Digite quantos nós serão criados na lista: \n");
    scanf("%d", &c);
    for(int i=0; i<=c; i++)
    {
        criar(l1,i);

    }

    //percorrer(l1,l1);
    displayLL(l1);


    





    







    return 0;
}