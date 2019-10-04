#include <stdio.h>
#include <stdlib.h>



//Estrutura base do nó.
struct Node
{
    int nData;
    struct Node *proximo;
};
 
typedef struct Node node; 
//Função pra printar o nó na tela.
void displayLL(node *p)
{
    printf("Mostrando a lista:\n"); 
    if(p)
    {
        do
        {
            printf(" %d", p->nData);
            p=p->proximo;
        }
        while(p);
        printf("\n");
    }
    else
        printf("Lista vazia.");
}

void inserir_inicio(node *p0, node *p1){
    p0->proximo = p1;
}

void inserir_fim(node *final, node *ultimo){
    final->proximo = ultimo;
    ultimo->proximo = NULL;
}

void inserir_meio(node *primeiro, node *i, node *ultimo){
    i->proximo = ultimo;
    primeiro->proximo = i;

}


void remover_inicio(node *p0){
    p0->proximo = NULL;

}

void remover_fim(node *p){
    p->proximo = NULL;
}


void remover_meio(node *p1, node *p2){
    p1->proximo = p2;

}


void inversa(node *p1, node *p2, node *p3){
    int vet[3];
    vet[0] = p1->nData;
    vet[1] = p2->nData;
    vet[2] = p3->nData;

        printf("Mostrando a lista inversamente: \n");

    for(int i=2; i>=0;i--){

        printf("%d ", vet[i]);
    }
}
 
int main(void)
{
    node *pNode0 = NULL;
    node *pNode1 = NULL;
    node *pNode2 = NULL;

    node *pNode25 = NULL;

    node *pNode3 = NULL;
    node *pNode4 = NULL;
     
    //Criando os nos e associando os dados.

    pNode0 = (node*) malloc(sizeof(node*));
    pNode0->nData = 0;


    pNode1 = (node*) malloc(sizeof(node*));
    pNode1->nData = 10;
     
    pNode2 = (node*) malloc(sizeof(node*));
    pNode2->nData = 20;

    pNode25 = (node*) malloc(sizeof(node*));
    pNode25->nData = 25;

     
    pNode3 = (node*) malloc(sizeof(node*));
    pNode3->nData = 30;

    pNode4 = (node*) malloc(sizeof(node*));
    pNode4->nData = 40;
     
    //Conectando os nós
    inserir_inicio(pNode0,pNode1);
    pNode1->proximo = pNode2;
    pNode2->proximo = pNode3;  
    pNode3->proximo = NULL;

    inserir_fim(pNode3, pNode4);

    inserir_meio(pNode2, pNode25, pNode3);

    remover_inicio(pNode0);

    remover_fim(pNode3);

    remover_meio(pNode2, pNode3);





    //Mostrando a lista.
    if(pNode1)  
        displayLL(pNode1);


    inversa(pNode1, pNode2, pNode3);
  
  free(pNode0);
  free(pNode1);
  free(pNode2);
  free(pNode3);
  free(pNode4);
  free(pNode25);
  
  return 0;
}