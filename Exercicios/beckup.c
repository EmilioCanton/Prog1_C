#include <stdio.h>
#include <string.h>


int main(void)
{
    int i,j,n;
    char frase[50];
    scanf("%d\n",&n);
    for(j=0; j<n; j++)
    {

            gets(frase);
            for (i=0; i<strlen(frase); i++)
            {
                if(((frase[i]!= ' ') && (frase[i-1]== ' ')) || (i==0))
                {
                    printf("%c",frase[i]);
                }
                else
                {
                    continue;
                }
            }
            printf("\n");
    }
    return 0;
}
