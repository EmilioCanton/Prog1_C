#include <stdio.h>
#include <string.h>


int main(void)
{
    int aliteracao=0,i,x=0,quant=0;
    char temp;
    char frase[5000];
   while (scanf(" %[^\n]", frase) != EOF)
   {
    for(i=0; i<strlen(frase); i++)
    {
        if(((frase[i]!= ' ') && (frase[i-1]== ' ')) || (i==0))
        {
            if(x==0)
            {
                temp=frase[i];
                x=1;
            }
             else if(x==1)
            {
                if(temp==frase[i])
                {
                    aliteracao= aliteracao+1;
                }


            }

        }

    }
    printf("%d\n",aliteracao);
    aliteracao=0;


   }



    return 0;
}
