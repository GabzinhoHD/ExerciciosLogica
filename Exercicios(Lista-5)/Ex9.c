#include <stdio.h>

int main()
{
    int i=1, result;
    printf("---TABUADA DO 6---\n");
    
    while(i <= 10){
        result = i * 6;
        printf("%d X 6 = %d\n", i, result);
        i++;
    }

    return 0;
}
