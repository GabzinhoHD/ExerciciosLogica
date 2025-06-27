#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
NOTA: Você perceberá que o código possui muitas validações
para as entradas de dados (E por isso o código pode ter ficado maior do que deveria).
Acho que exagerei um pouquinho em relação às validações :)
*/

int main()
{
    int i, n, tam = 100;
    int opcao, jaCadastrou = 0, alterar, excluir, encontrou = 0, especifico;
    
    struct TPessoa{
        int codigo, idade;// Inteiros
        char nome[tam], sexo; // Caracteres
        float altura, peso;  // Valor Real
    };
    struct TPessoa cadastro[tam];
    
    printf("---SISTEMA DE CADASTRO---\n");
    do{
        printf("\nMENU DE SELEÇÃO:\n");
        /* Opções do menu */
        printf("[1] Cadastrar pessoas\n");
        printf("[2] Alterar dados de cadastro\n");
        printf("[3] Excluir um cadastro\n");
        printf("[4] Mostrar cadastro especifico\n");
        printf("[5] Mostrar todos os cadastro\n");
        printf("[0] Sair\n");
        
        printf("\nDigite o nº do que deseja fazer: "); /* Entrada da opção */
        scanf("%d", &opcao);
        
        /* Validação da opção */
        if(opcao > 0 && opcao <= 5){
            if(opcao != 1 && jaCadastrou == 0){ /* Validação do primeiro cadastro*/
                printf("\nNão houve nenhum cadastro ainda!!\n");
                continue;
            }
            switch(opcao){
                case 1:
                /* Cadastrar */
                    printf("\nCADASTRO:\n");
                    printf("Informe o nº de pessoas a cadastrar: ");
                    scanf("%d", &n);
                    for(i = 0; i < n; i++){
                        printf("\nOBS: preencha os campos adequadamente\npara seguir para o campo seguinte!!\n");
                        printf("\n%dº PESSOA:\n", i+1);
                        do{
                            printf("| Codigo: ");
                            scanf("%d", &cadastro[i].codigo);
                        }while(cadastro[i].codigo < 0);
                        
                        getchar();  // Apaga o ENTER deixado pelo scanf
                        printf("| Nome: "); /* Apenas o campo nome não tem Validação porque isso e impossivel!! */
                        fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
        
                        do{
                            printf("| Sexo(M/F): ");
                            scanf(" %c", &cadastro[i].sexo);
                            cadastro[i].sexo = toupper(cadastro[i].sexo);
                        }while(cadastro[i].sexo != 'M' && cadastro[i].sexo != 'F');
                        do{
                            printf("| Idade: ");
                            scanf("%d", &cadastro[i].idade);
                        }while(cadastro[i].idade < 0);
                        do{
                            printf("| Altura(m): ");
                            scanf("%f", &cadastro[i].altura);
                        }while(cadastro[i].altura < 0);
                        do{
                            printf("| Peso(kg): ");
                            scanf("%f", &cadastro[i].peso);
                        }while(cadastro[i].peso < 0);
                       
                    }
                    jaCadastrou = 1;
                break;
                case 2:
                /* Alterar */
                    printf("Informe o codigo do cadastro que deseja alterar: ");
                    scanf("%d", &alterar);
                    for(i = 0; i < n; i++) {
                        if(cadastro[i].codigo == alterar){
                            do{
                                printf("\nMENU DE ALTERAÇÃO:\n");
                                printf("[1] Alterar codigo\n");
                                printf("[2] Alterar nome\n");
                                printf("[3] Alterar sexo\n");
                                printf("[4] Alterar idade\n");
                                printf("[5] Alterar altura\n");
                                printf("[6] Alterar peso\n");
                                printf("[0] Sair");
                                printf("\nDigite o nº do que deseja alterar: ");
                                scanf("%d", & alterar); // Usando a mesma variavel :)
                                /* Validação do (alterar) */
                                if(alterar > 0 && alterar <= 6) switch(alterar){
                                    case 1:
                                       do{
                                            printf("| Codigo: ");
                                            scanf("%d", &cadastro[i].codigo);
                                        }while(cadastro[i].codigo < 0);
                                    break;
                                    
                                    case 2:
                                        getchar();  // Apaga o ENTER deixado pelo scanf
                                        printf("| Nome: ");
                                        fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
                                    break;
                                    case 3:
                                        do{
                                            printf("| Sexo(M/F): ");
                                            scanf(" %c", &cadastro[i].sexo);
                                            cadastro[i].sexo = toupper(cadastro[i].sexo);
                                        }while(cadastro[i].sexo != 'M' && cadastro[i].sexo != 'F');
                                    break;
                                    case 4:
                                        do{
                                            printf("| Idade: ");
                                            scanf("%d", &cadastro[i].idade);
                                        }while(cadastro[i].idade < 0);
                                    break;
                                    case 5:
                                        do{
                                            printf("| Altura(m): ");
                                            scanf("%f", &cadastro[i].altura);
                                        }while(cadastro[i].altura < 0);
                                    break;
                                    case 6:
                                        do{
                                            printf("| Peso(kg): ");
                                            scanf("%f", &cadastro[i].peso);
                                        }while(cadastro[i].peso < 0);
                                    break;
                                    default:
                                        printf("\nEntrada Ivalida!! Tente novamente\n");
                                }
                            }while(alterar != 0);
                            encontrou = 1;
                            printf("SAINDO...\n");
                        }
                    }
                    // Validação do codigo
                    if(encontrou == 0) printf("\nCodigo [%d] não encontrado!!\n", alterar);
                break;
                case 3:
                /* Excluir */
                    printf("\nEXCLUIR CADASTRO:\n");
                    printf("Informe o codigo do cadastro que deseja excluir: ");
                    scanf("%d", &excluir);
                    for(i = 0; i < n; i++) {
                        if(cadastro[i].codigo == excluir){
                            cadastro[i].codigo = '\0';
                            cadastro[i].nome[0] = '\0';
                            cadastro[i].sexo = '\0';
                            cadastro[i].idade = 0;
                            cadastro[i].altura = 0;
                            cadastro[i].peso = 0;
                            printf("\nCodigo [%d] excluido com sucesso!!\n", excluir);
                            encontrou = 1;
                        }
                    }
                    // Validação do codigo
                    if(encontrou == 0) printf("\nCodigo [%d] não encontrado!!\n", excluir);
                break;
                case 4:
                /* Mostrar cadastro especifico */
                    printf("\nMOSTRAR CADASTRO ESPECIFICO:\n");
                    printf("Informe o codigo do cadastro: ");
                    scanf("%d", &especifico);
                    for(i = 0; i < n; i++) {
                        if(cadastro[i].codigo == especifico){
                            printf("%dº Pessoa:\n", i+1);
                            printf("| Codigo: %d\n", cadastro[i].codigo);
                            printf("| Nome: %s\n", cadastro[i].nome);
                            printf("| Sexo: %c\n", cadastro[i].sexo);
                            printf("| Idade: %d\n", cadastro[i].idade);
                            printf("| Altura: %.2f\n", cadastro[i].altura);
                            printf("| Peso: %.2f\n", cadastro[i].peso);
                            encontrou = 1;
                        }
                    }
                    // Validação do codigo
                    if(encontrou == 0) printf("\nCodigo [%d] não encontrado!!\n", especifico);  
                break;
                case 5:
                /* Mostrar cadastros */
                    printf("\nTODOS OS CADASTROS:\n");
                    for(i = 0; i < n; i++){
                        printf("\n%dº PESSOA:\n", i+1);
                        printf("| Codigo: %d\n", cadastro[i].codigo);
                        printf("| Nome: %s\n", cadastro[i].nome);
                        printf("| Sexo: %c\n", cadastro[i].sexo);
                        printf("| Idade: %d\n", cadastro[i].idade);
                        printf("| Altura: %.2f\n", cadastro[i].altura);
                        printf("| Peso: %.2f\n", cadastro[i].peso);
                    }
                break;
                default:
                /* Entrada Invalida */
                    printf("\nEntrada Ivalida!! Tente novamente\n");
            }   
        }
    }while(opcao != 0);
    printf("SAINDO...");
    return 0;
}
