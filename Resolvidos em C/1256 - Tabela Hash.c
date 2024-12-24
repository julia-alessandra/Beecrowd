#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FALSE 0
#define TRUE 1

typedef struct CELULA {
    int dado;
    struct CELULA *proximo;
} Celula;

Celula* criar_celula(int v, Celula *p) 
{
    Celula *novo = (Celula*) malloc(sizeof(Celula));
    if (novo == NULL)
        return NULL;

    novo->dado = v;
    novo->proximo = p;

    return novo;
}

typedef struct {

    Celula *inicio;
    Celula *fim;
    int cont;

} Queue;

typedef struct hash{
    Queue *items;
} Hash;


Queue* criar_fila(){
    Queue* fila = (Queue*) malloc(sizeof(Queue));
    if (fila != NULL) {
        fila->inicio = NULL;
        fila->fim = NULL;
        fila->cont = 0;
    }
    return fila;
}

int enfileirar(Queue *queue, int item){
    Celula* novo = criar_celula(item, NULL);
    
    //se não tiver memoria
    if(!novo){
        return FALSE;
    }
    //se estiver vazia
    if(queue->cont == 0){
        queue->inicio = novo;
        queue->fim = novo;
    }
    else{
        queue->fim->proximo = novo;
        queue->fim = novo;
    }
    queue->cont++;
    return TRUE;
}

int tamanho(Queue *queue){
    int tam = queue->cont;
    return tam;
}


int estah_vazia(Queue *queue){
    return queue->inicio == NULL;
}

void imprimir_Fila(Queue *queue)
{
    if (estah_vazia(queue) == FALSE)
    {
        Celula *x = queue->inicio;
        while (x != NULL)
        {
            printf(" -> %d", x->dado);
            x = x->proximo;
        }
    }
}

//----------------------------

Hash *criarHash(int tam)
{
    Hash *tabela = (Hash *)calloc(tam, sizeof(Hash));
    for (int i = 0; i < tam; i++)
        tabela[i].items = criar_fila();
    return tabela;
}

void adicionar (Hash *tabela, int Item, int pos){
    enfileirar(tabela[pos].items, Item);
}

void imprimirHash(Hash *tabela, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d", i);
        if(!estah_vazia(tabela[i].items))
            imprimir_Fila(tabela[i].items);
        printf(" -> \\");
        printf("\n");
    }
}

 //MAIN FINALMENTE

int main(){
    int qtn;
    scanf("%d", &qtn);
    for(int i = 0; i < qtn; i++){
        int tamanho, quantidade;
        scanf("%d %d", &tamanho, &quantidade);

        Hash *tabela = criarHash(tamanho);

        while (quantidade--)
        {
            int item;
            scanf("%d", &item);
            adicionar(tabela, item, item % tamanho);
        }
        imprimirHash(tabela, tamanho);
        if(i != qtn - 1)
            printf("\n");
    }
}