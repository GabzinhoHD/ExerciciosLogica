
#include <stdio.h>
#include <math.h>
int main()
{
    int Num1, Num2, Num3;
    float Media;
    
    printf("Insira três valores:\n");
    scanf("%d", &Num1);
    scanf("%d", &Num2);
    scanf("%d", &Num3);
    
    Media = ((float)Num1 + (float)Num2 + (float)Num3) / 3;
    
    printf("A media será: %f", Media);

    return 0;
}
