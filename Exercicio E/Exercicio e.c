#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Insira o valor a: ");
   scanf("%d",&a);

   printf("Insira o valor b: ");
   scanf("%d",&b);
   c=b;
   b=a;
   a=c;

   printf ("Valor de a: " "%d \n", a);

   printf ("Valor de b: " "%d", b);

}
