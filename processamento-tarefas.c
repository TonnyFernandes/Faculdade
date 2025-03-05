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
        /*
            Se tal item se igualar a zero, a tarefa será dada como feita. O \n serve para arrumar o printf na função listaCompleta(). Digite 1 no painel para entender.
            Coloquei o menor ou igual só para evitar problemas para CASO alguma tarefa fique com o valor negativo
        */
    }
    else{
        printf("Pendente\n");
        // Caso o valor da tarefa seja positivo, a tarefa será dada como pendente
    }
}

void ver_listaCompleta(TListaTarefas lista){
    printf("Lista de Compras: \n\t Cachos de banana necessários: %d | ", lista.compras.cachosBanana);
        conferir_itemLista(lista.compras.cachosBanana);
        // confere se o item cachosBanana está feito ou pendente
    
    printf("\n");
    // Após toda a lista, terá um \n para organizar o painel
}

int main() {
    TListaTarefas lista={
        .compras={2, 5, 1, 1},
            /*
                Tradução:
                    dois cachos de banana para comprar
                    cinco maçãs para comprar
                    uma amaciante e uma esponja para comprar
                Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa
            */
        .domestica={1, 1, 1},
            /*
                Tradução:
                    Ainda é necessário limpar o banheiro, tirar a poeira da casa e lavar as panelas
                Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa
            */
        .faculdade={1, 1},
            /*
                Tradução
                    Há atividades a serem feitas nas disciplinas de Estrutura de Dados e Projeto Integrador
                Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa
            */
        .projetos={2, 4},
            /*
                Tradução:
                    Dois videos do curso para ver
                    Quatro tarefas do curso para fazer
                Caso um desses valores se iguale a zero, a tarefa será dada como "feita" pelo programa
            */
    };
    int escolha;
    
    do{
        printf("Digite 0 para fechar o programa\n");
        printf("Digite 1 para ver a lista completa\n");
        printf("Digite 2 para editar a lista de compras\n");
        printf("Digite 3 para editar a lista de tarefas domésticas\n");
        printf("Digite 4 para editar a lista da faculdade\n");
        printf("Digite 5 para editar a lista de projetos pessoais\n");
        scanf("%d", &escolha);
        
        printf("\n");
        
        switch(escolha){
            case 0:
                printf("Programa fechado!\n");
                break;
            
            case 1:
                ver_listaCompleta(lista);
                break;
            
            case 2:
                // editar_listaCompras(lista);
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
    }while(escolha!=0);
    // 

    return 0;
}
