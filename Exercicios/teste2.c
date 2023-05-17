#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int i,j,k;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            for(k=0;k<4;k++)
            {
                if (k==3)
                {
                    break;
                }
                printf("k = %d  ",k);
            }
            printf("\n");
        }
    }

    return 0;
}
