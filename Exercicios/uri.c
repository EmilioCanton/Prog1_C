#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ponto{
    int x,y;
    };
void soma_um(int n)
{
  n=n+1;
  printf("dentro da funcao = %d\n",n);

}
void atribui(struct ponto *i)
{
    (*i).x=(*i).x+77;
    i->y=i->y+10;
}

int main (void)
{
struct ponto p1 = {10,20};

soma_um(p1.x);
atribui(&p1);
printf("Referencia:\np1.x=%d\np1.y=%d\n",p1.x,p1.y);




system("pause");
return 0;
}
