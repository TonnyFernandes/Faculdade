/*
#include <stdio.h>

typedef struct sListaCompras{
    int cachosBanana;
    int macas;
    int amaciante;
    int esponja;
}TListaCompras;
typedef struct sTarefasDomesticas{
    int banheiro;
    int poeira;
    int panelas;
}TDomestica;
typedef struct sFaculdade{
    int estruturaDados;
    int projetoIntegrador;
}TFaculdade;
typedef struct sProjetosPessoais{
    int videosCurso;
    int tarefasCurso;
}TProjetos;

typedef struct sListaTarefas{
    TListaCompras compras;
    TDomestica domestica;
    TFaculdade faculdade;
    TProjetos projetos;
}TListaTarefas;



void conferir_itemLista(int item){
    if(item<=0){
        printf("Feito\n");
    }
        /*
        Se tal item se igualar a zero, a tarefa será dada como feita. \n serve para arrumar o printf na função listaCompleta().
        Coloquei o menor ou igual só para evitar problemas para CASO alguma tarefa fique com o valor negativo
        
    else{
        printf("Pendente\n");
    } // Caso o valor da tarefa seja positivo, a tarefa será dada como pendente
}


void editar_listaCompras(TListaTarefas *lista){
    int escolha, novoValor;

    do{
        printf("Digite 0 para finalizar a edição da lista de compras\n");
        printf("Digite 1 para editar a quantidade de cachos de banana necessária\n");
        printf("Digite 2 para editar a quantidade de maçãs necessária\n");
        printf("Digite 3 para editar a quantidade de litros de amaciante necessária\n");
        printf("Digite 4 para editar a quantidade de esponjas necessária\n");
        scanf("%d", &escolha);
    
        switch(escolha){
            case 0:
                printf("Edição da lista de compras finalizada\n\n");
                break;
            case 1:
                printf("Digite a nova quantidade de cachos de banana que você deseja comprar.\n");
            scanf("%d", &novoValor);
                lista->compras.cachosBanana = novoValor;
                break;
            
            default:
            printf("Opção inválida, tente novamente\n\n");
        }
    
    }while(escolha!=0);
}


void ver_listaCompleta(TListaTarefas lista){

    printf("Lista de Compras\n");
    printf("\tCachos de banana necessários: %d | ", lista.compras.cachosBanana);
        conferir_itemLista(lista.compras.cachosBanana);
    printf("\tMaçãs necessárias: %d | ", lista.compras.macas);
    conferir_itemLista(lista.compras.macas);
    printf("\tLitros de amaciante necessário: %d | ", lista.compras.amaciante);
        conferir_itemLista(lista.compras.amaciante);
    printf("\tEsponjas necessárias: %d | ", lista.compras.esponja);
        conferir_itemLista(lista.compras.esponja);
    
    printf("Tarefas domésticas\n");
    printf("\tBanheiro | ");
        conferir_itemLista(lista.domestica.banheiro);
    printf("\tPoeira | ");
        conferir_itemLista(lista.domestica.poeira);
    printf("\tPanelas | ");
        conferir_itemLista(lista.domestica.panelas);
    
    printf("Atividades faculdade\n");
    printf("\tAtividades de Estrutura de Dados: %d | ", lista.faculdade.estruturaDados);
        conferir_itemLista(lista.faculdade.estruturaDados);
    printf("\tAtividades do Projeto Integrador: %d | ", lista.faculdade.projetoIntegrador);
        conferir_itemLista(lista.faculdade.projetoIntegrador);
    
    printf("Projetos Pessoais\n");
    printf("\tVideos do curso para serem vistos: %d | ", lista.projetos.videosCurso);
        conferir_itemLista(lista.projetos.videosCurso);
    printf("\tAtividades do curso para serem feitas: %d | ", lista.projetos.tarefasCurso);
        conferir_itemLista(lista.projetos.tarefasCurso);
    
    printf("\n");
    // Após toda a lista, terá um \n para organizar o painel, pois logo após isso o menu aparecerá novamente
}


void painel(TListaTarefas lista, int *escolha){
    int opcao;
    
    printf("Digite 0 para fechar o programa\n");
    printf("Digite 1 para ver a lista completa\n");
    printf("Digite 2 para editar a lista de compras\n");
    printf("Digite 3 para editar a lista de tarefas domésticas\n");
    printf("Digite 4 para editar a lista da faculdade\n");
    printf("Digite 5 para editar a lista de projetos pessoais\n");
    scanf("%d", &opcao);
    (*escolha)=(opcao);
    
    printf("\n");
    
    switch(opcao){
        case 0:
            printf("Programa fechado!\n");
            break;
        
        case 1:
            ver_listaCompleta(lista);
            break;
        
        case 2:
            editar_listaCompras(&lista);
            break;
        
        case 3:
            // editar_listaDomestica(lista);
            break;
        
        case 4:
            // editar_listaFaculdade(lista);
            break;
        
        case 5:
            // editar_listaProjetos(lista);
            break;
        
        default:
            printf("Escolha inválida, tente novamente\n\n");
    }
    return;
}

int main() {
TListaTarefas lista={
.compras={2, 5, 1, 1},

Tradução:
dois cachos de banana para comprar
cinco maçãs para comprar
uma amaciante e uma esponja para comprar
Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa

.domestica={1, 1, 1},

Tradução:
Ainda é necessário limpar o banheiro, tirar a poeira da casa e lavar as panelas
Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa

.faculdade={1, 1},

Tradução
Há atividades a serem feitas nas disciplinas de Estrutura de Dados e Projeto Integrador
Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa

.projetos={2, 4},

Tradução:
Dois videos do curso para ver
Quatro tarefas do curso para fazer
Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa

};
int escolha;

do{
painel(lista, &escolha);
}while(escolha!=0);

return 0;
}
*/
