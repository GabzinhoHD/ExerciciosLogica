
#include <stdio.h>

int main()
{
    char estado;
    printf("Diga seu estado civil:\n");
    printf("S: solteiro(a) \nC:casado(a)\nD:divorciado(a)\nV:viúvo(a)\n");
    scanf("%c", &estado);
    
    if(estado == 'S' || estado =='s'){
        printf("Você é solteiro(a) :)");
    }
    
    else if(estado == 'C' || estado =='c'){
        printf("Você é casado(a) :(");
    }
    
    else if(estado == 'D' || estado =='d'){
        printf("Você é divorciado(a) :0");
    }
    
    else if(estado == 'V' || estado =='v'){
        printf("Você é viúvo(a) :)");
    }
    else{
        printf("Digito errado!!");
    }

    return 0;
}
