#include <stdio.h>
void zerador(int vet[10])
{
    int i;
    for(i=0; i<10; i++)
        vet[i] = 0;
}
void print(int vet[10])
{
    int i;
    for(i=0; i<10; i++){
        if(i == 0)
            printf("%d", vet[i]);
        else if(i<9)
            printf(" %d", vet[i]);
    }
    printf("\n");
}

int main (void)
{
    int A,B=1,casas=1,div=10;
    int i,j,div2=1,res=10,X=0;
    int vet[10];

while(B!=0){

    scanf("%d %d",&A, &B);
    if(B==0)
        break;
    zerador(vet);

    for(A; A<=B; A++)
    {
       while((A/div)!=(0))
       {
           div=div*10;
           casas+=1;
       }
       div=10;
       for(i=0; i<10; i++)
       {
           for(j=0; j<casas; j++)
           {
              X=(A%res)/div2;
              res=res*10;
              div2=div2*10;
              if(X==i)
              {
                  vet[i]=vet[i]+1;
              }
           }
           div2=1;
           res=10;

       }
       casas=1;

    }
      print(vet);
}

return 0;

}
