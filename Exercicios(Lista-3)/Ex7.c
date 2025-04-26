#include <stdio.h>
int main () {   
    int ladoA, ladoB, ladoC;
    printf("Insira valores para 3 lados de um triangulo:\n");
    scanf("%d", &ladoA);
    scanf("%d", &ladoB);
    scanf("%d", &ladoC);

    if(ladoA + ladoB != ladoC){
        if(ladoA == ladoB && ladoB == ladoC){
            printf("O triângulo é equilátero");
        }
        else if(ladoA == ladoB && ladoC != ladoA ||
                ladoB == ladoC && ladoA != ladoB ||
                ladoC == ladoA && ladoB != ladoC){
            printf("O triângulo é isósceles");
        }
        else{
            printf("O triângulo é escalano");
        }
    }
    else{
        printf("Um triângulo não pode ser formado!!");
    }
    return 0;
}
    
