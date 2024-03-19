#include <stdio.h>

int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
    
    for (int i = 10; i <= 99; i += 1) 
    {
        if(i%7==0)
        {printf("%d\t", i);}
    }
    
    return 0;
}