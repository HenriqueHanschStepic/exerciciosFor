#include  <stdio.h>
int main () {
	int cont, variante, maislinha=1, numero;
 	
	printf ("Insira um número:\n");
 	scanf ("%d", &numero);
 	printf("\n");
 	
 	for (cont=1; cont<=numero; cont++){
  		for (variante=numero; variante<=cont; variante++)
  		
		printf ("");
		
  		for (maislinha=1; maislinha<=cont*1; maislinha++)
  		
		printf ("*");
  		printf ("\n");
 	}
	getchar ();
	return 0;
}
