#include <stdio.h>
int main()
{
    int r,c;
    char ab='A';
    for(r=1;r<=5;r++){
        for(c=1;c<=r;c++){
            printf("%c ",ab++);
        }
        printf("\n");
    }
    return 0;
}
