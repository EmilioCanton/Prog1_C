#include <stdio.h>
#include <stdlib.h>

int  main(int argc, char* argv[])
{
    if (argc==1)
        printf("Programa %s sem parametros\n",argv[0]);
    else
    {
        int i;
        printf("Parametros do programa %s\n",argv[0]);
        for(i=1; i<argc; i++)
        {
            printf("Parametro %d: %s\n",i,argv[i]);
        }
    }

    system("pause");
    return 0;
}
