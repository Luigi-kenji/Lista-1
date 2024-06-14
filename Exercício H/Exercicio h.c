#include<stdio.h>
float main()

{
float volume, comprimento, largura, altura;

printf ("insira o comprimento da caixa: ");
scanf ("%f", & comprimento);

printf ("insira a altura da caixa: ");
scanf ("%f", & altura);

printf ("insira a largura da caixa: ");
scanf ("%f", & largura);

volume=comprimento*largura*altura;

 printf ("\n" "O volume da caixa e de: " "%.2f metros cubicos", volume);
printf("\n");
}
