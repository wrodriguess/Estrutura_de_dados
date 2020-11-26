 #include<stdio.h>
#include<stdlib.h>
typedef struct st_ficha{
  char  *data;
  char  *medico;
  char  *obs;
} ;
typedef struct pacient{
  char  *nome;
  char  *documento;
  char  *idade;
  char  *genero;
  struct st_ficha *ficha;
} pacient;

struct node{
    struct pacient *pacient;
    struct node   *next;
} *head, *tail;


void insert(pacient *new_pacient){

    struct node *node = malloc(sizeof(struct node));
    node->pacient = new_pacient;
    node->next = NULL;

    if (head == NULL){
        head = node;
        tail = node;
    }
    else{
        tail->next = node;
        tail = node;
    }
}


void display(){
    if(head == NULL){
        printf("A lista esta vazia\n");
    }
    else{
        struct node *atual = head;
        while(atual != NULL){

           printf("\nDados do Paciente: %s\nDocumento: %s\nIdade: %s\nGenero: %s ", atual->pacient->nome, 
                                                                        atual->pacient->documento,
                                                                        atual->pacient->idade,
                                                                        atual->pacient->genero);
           atual = atual->next;
           
        }
        printf("\n");

    }
}

int main(){

    int total_of_patients,i;

    printf("Quantos pacientes serao cadastrados ? \t");
    scanf("%d",&total_of_patients);

    for(i=0;i<total_of_patients;i++){
    
        struct pacient *new_node_pacient = malloc(sizeof(struct pacient));
        new_node_pacient->nome       = malloc(50);
        new_node_pacient->documento  = malloc(10);
        new_node_pacient->idade      = malloc(10);
        new_node_pacient->genero     = malloc(10);
        struct st_ficha *dados = malloc(sizeof(struct st_ficha));
        dados->data = malloc (20);
        dados->medico = malloc (20);
        dados->obs = malloc (20);

        printf("Digite o nome do paciente %d \n",i+1);
        scanf("%s", new_node_pacient->nome);

        printf("Digite o Documento do paciente %d \n",i+1);
        scanf("%s", new_node_pacient->documento);

        printf("Digite a idade do paciente  %d \n",i+1);
        scanf("%s", new_node_pacient->idade);
        
        printf("Digite o genero do paciente %d \n",i+1);
        scanf("%s", new_node_pacient->genero);

        printf("Agora entre com os dados da ficha do paciente");

        printf("\nEntre com a data da ficha do paciente %d \nExemplo dia-mes-ano\n",i+1);
        scanf("%s", dados->data);

        printf("Entre com o nome do medico do paciente %d \n",i+1);
        scanf("%s", dados->medico);

        printf("Entre com as observacoes da ficha do paciente %d \n",i+1);
        scanf("%s", dados->obs);
                
        insert(new_node_pacient);
    }
    display();

    return 0;
}
