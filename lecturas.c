#include <stdio.h>

#define MAXLINEA 80
#define MAXFRASE 40

int main (void)
{
    int a,b;
    char frase [MAXFRASE+1];
    char linea [MAXLINEA+1];
    
    printf ("Dame el valor de un entero: ");
    gets (linea);
    sscanf (linea, "%d", &a);
    printf ("Introduce ahora una frase: ");
    gets (frase);
    printf ("Y ahora dame el valor de otro entero:");
    gets (linea);
    sscanf (linea, "%d", &b);
    
    printf ("Enteros Ledos: %d, %d. \n", a, b);
    printf ("Frase leida: %s. \n", frase);
    
    return 0;
}