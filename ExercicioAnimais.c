#include <stdio.h>
#include <ctype.h>

int main()
{
	char resposta;
	printf("---SISTEMA DE INDENTIFICAÇAO ANIMAL---\n\n");
	printf("O animal é mamífero?(S/N)\n");
	scanf(" %c", &resposta);
	resposta = toupper(resposta);
	
	if(resposta == 'S'){
	    printf("O animal é quadrúpede?(S/N)\n");
	    scanf(" %c", &resposta);
	    resposta = toupper(resposta);
	    
	    if(resposta == 'S'){
	        printf("O animal é carnivoro?(S/N)\n");
	        scanf(" %c", &resposta);
	        resposta = toupper(resposta);
	        
	        if(resposta == 'S'){
	            printf("O animal é um leão!!");
	        }
	        else if(resposta == 'N'){
	            printf("O animal é herbivoro?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal é um cavalo!!");
	            }
	            
	            else if(resposta == 'N'){
	                printf("O animal não esta cadastrado!!");
	            }
	            else{
	                printf("Entrada Invalida!!");
	            }
	        }
	        else{
	            printf("Entrada Invalida!!");
	        }
	        
	    }
	    else if(resposta == 'N'){
	        printf("O animal é bipede?(S/N)\n");
	        scanf(" %c", &resposta);
	        resposta = toupper(resposta);
	        if(resposta == 'S'){
	            printf("O animal é onivoro?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal é o homem!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal é frutifero?(S/N)\n");
	                scanf(" %c", &resposta);
	                resposta = toupper(resposta);
	                
	                if(resposta == 'S'){
	                    printf("O animal é o macaco!!");
	                }
	                else if(resposta == 'N'){
	                    printf("O animal não esta cadastrado!!");
	                }
	            }
	            else{
	                printf("Entrada Invalida!!");
	            }
	        }
	        else if(resposta == 'N'){
	            printf("O animal é voador?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal é o morcego!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal é aquatico?(S/N)\n");
	                scanf(" %c", &resposta);
	                resposta = toupper(resposta);
	                if(resposta == 'S'){
	                    printf("O animal é uma baleia!!");
	                }
	                else if(resposta == 'N'){
	                    printf("O animal não esta cadastrado!!");
	                }
	                else{
	                    printf("Entrada Invalida!!");
	                }
	            }
	            else{
	                printf("Entrada Invalida!!");
	            }
	        }
	        else{
	            printf("Entrada Invalida!!");
	        }
	    }
	    else{
	       printf("Entrada Invalida!!");
	    }
	}
	else if(resposta == 'N'){
	    printf("O animal é uma ave?(S/N)\n");
	    scanf(" %c", &resposta);
	    resposta = toupper(resposta);
	    
	    if(resposta == 'S'){
	        printf("O animal é não-voador?(S/N)\n");
	        scanf(" %c", &resposta);
	        resposta = toupper(resposta);
	        
	        if(resposta == 'S'){
	            printf("O animal é tropical?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal é o avestruz!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal é polar?(S/N)\n");
	                scanf(" %c", &resposta);
	                resposta = toupper(resposta);
	                
	                if(resposta == 'S'){
	                    printf("O animal é o pinguim!!");
	                }
	                else if(resposta == 'N'){
	                    printf("O animal não esta cadastrado!!");
	                }
	                else{
	                    printf("Entrada Invalida!!");
	                }
	            }
	            else{
	                printf("Entrada Invalida!!");
	            }
	        }
	        else if(resposta == 'N'){
	            printf("O animal é nadador?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal é um pato!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal é uma rapina?(S/N)\n");
	                scanf(" %c", &resposta);
	                resposta = toupper(resposta);
	                
	                if(resposta == 'S'){
	                    printf("O animal é uma aguia!!");
	                }
	                else if(resposta == 'N'){
	                    printf("O animal não esta cadastrado!!");
	                }
	                else{
	                    printf("Entrada Invalida!!");
	                }
	            }
	            else{
	                printf("Entrada Invalida!!");
	            }
	        }
	        else{
	            printf("Entrada Invalida");
	        }
	    }
	    else if(resposta == 'N'){
	        printf("O animal é um reptil?(S/N)\n");
	        scanf(" %c", &resposta);
	        resposta = toupper(resposta);
	        
	        if(resposta == 'S'){
	            printf("O animal tem casco?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal é uma tartaruga!!");
	            }
	            else if(resposta == 'N'){
    	            printf("O animal é carnivoro?(S/N)\n");
    	            scanf(" %c", &resposta);
    	            resposta = toupper(resposta);
    	            
    	            if(resposta == 'S'){
    	                printf("O animal é um crocodilo!!");
    	            }
    	            else if(resposta == 'N'){
    	                printf("O animal possui patas?(S/N)\n");
    	                scanf(" %c", &resposta);
    	                resposta = toupper(resposta);
    	                if(resposta == 'S'){
    	                    printf("O animal é uma cobra!!");
    	                }
    	                else if(resposta == 'N'){
    	                    printf("O animal não esta cadastrado!!");
    	                }
    	                else{
    	                    printf("Entrada Invalida!!");
    	                }
    	            }
    	            else{
    	                printf("Entrada Invalida!!");
    	            }
	            }
	            else{
	                printf("Entrada Invalida!!");
	            }
	            
	        }
	        else if(resposta == 'N'){
	            printf("O animal não esta cadastrado!!");
	        }
	        else{
	            printf("Entrada INvalida");
	        }
	    }
	    else{
	        printf("Entrada Invalida!!");
	    }
	}
	else{
	    printf("Entrada Invalida!!");
	}
	return 0;
}

