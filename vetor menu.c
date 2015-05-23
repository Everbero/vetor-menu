/************************************************************************************
* Programa: Gerador de vetor com N posições com menu
* Código: Giovani de Alencar Freitas
* Revisão: Douglas de Araújo
* Versão: 1.2
* Curso: 1º ADS Noturno
* licença: Kopimi url: http://www.kopimi.com/
*************************************************************************************/
#include "stdlib.h"
#include "stdio.h"
main(){
    //declaração de variáveis
    int lista, tam=0,tam2,vet[tam],cont,x2=1,cont2,temp,vs,sec,y=0,vz;
    //while imprime o menu sempre que x2=1, x2 não é alterada por nenhuma ação no programa por isso o menu sempre imprime
    while(x2=1){
    printf("\t\t\t\t MENU PRINCIPAL\n\n 1. DEFINICAO DO TAMANHO DO VETOR \n 2. GERACAO DOS DADOS NO VETOR \n 3. ORDENACAO DO VETOR \n 4. BUSCA SEQUENCIAL \n 5. IMPRESSAO DO VETOR \n 6. SAIDA \n ");
    scanf("%i",&lista);
    system("cls");// limpa a tela após a impressão
    // switch-case ativa as opções do menu
    switch(lista) {
        case 0: 
            printf("opcao invalida \n\n");  
            break;
        // gera o vetor
        case 1: 

            printf("Digite o tamanho do vetor \n");
            scanf("%i",&tam2);
            tam=tam2-1; // ok isso é um recurso técnico pra burlar o tamanho do vetor, como ele já está inicializado com 0
            while(tam<=0){
                
                 printf("Tamanho invalido\n");
                 printf("Digite um valor positivo maior que zero \n");
                 scanf("%i",&tam2);
                 tam=tam2-1;
                  }
               
                 printf("tamanho do vetor: %i \n", tam2);
                 y=1;
				
        break;
        // preenche o vetor    
        case 2: 
            if(y==1){
                 for(cont=0;cont<=tam;cont++){
                 vet[cont]=rand()%tam2;
                 }
                 printf("O vetor foi preenchido \n");
            } 
           else
				printf("Primeiro defina o tamanho do vetor\n\n");
        break;
        // ordena o menu com bubble sort 
        case 3: 
            
             for(cont2=0;cont2<=tam;cont2++){
                for(cont=0;cont<=tam;cont++){
                  if(vet[cont]>vet[cont+1]){
	           	   temp=vet[cont];
	           	   vet[cont]=vet[cont+1];
	               vet[cont+1]=temp;
	               vz++;
                  }
				}
             }
             printf("O vetor foi ordenado \n\nForam feitas %i commparacoes \nForam feitas %i trocas",cont*cont2,vz);
             vz=0;
        break;    
        // faz a busca sequencial por um valor qualquer e informa se o valor existe    
        case 4: 
            printf("Digite um numero para busca sequencial: \n");
            scanf("%i",&vs);
                for(cont=0;cont<=tam;cont++){
                    if(vs==vet[cont])
                    sec=1;
                }
            if(sec==1)
                printf("Esse numero existe no vetor\n");
            else
                printf("Esse numero nao existe no vetor \n");
            break;
        // imprime o vetor    
        case 5: 
            for(cont=0;cont<=tam;cont++){
				printf("%i ",vet[cont]);  
               }
             printf("\n");  
        break;
        // sai do programa
        case 6: 
            printf("\n\n\n\t\t\t\t\t FIM");
            system("pause>nul"); // >nul não exibe msg de saída
            exit(0); //fecha o programa
        // imprime mensagem de erro caso o usuario escolha uma opcao inexistente    
        default:
            printf("Opcao invalida \n");
            printf("\n Digite Numeros de 1 ate 6");
            main();
                        
        }//fecha o switch-case
    
    }//fecha o while inicial   
    
}// encerra o main
