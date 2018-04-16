#include  <stdio.h>
int main () {
	int cont, j, k=1,n ,m ,  numero;
 	
	printf ("Insira um número:\n");
 	scanf ("%d", &numero);
	
 	for (cont=1; cont<=numero; cont++){
  	for (j=numero; j>=cont; j--)
	printf (" ");
  	for (k=1; k<=cont*2-1; k++)
	printf ("*");
  	printf ("\n");
 	}
 		for (m=numero/1.5; m<numero; m++){
  			for (n=2; n<=k/2; n++)
   				printf (" ");
 				printf ("***\n");
 		}
	getchar ();
	return 0;
}
