#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int cont  = 0,
	    cont2   = 0,
	    resultado = 0;
			
	for (cont = 1; cont <= 10; cont++) {
		printf("Tabuado do %d\n", cont);
		for (cont2 = 1; cont2 <= 10; cont2++) {
			resultado = cont * cont2;
			
			printf("%d * %d = %d\n", cont, cont2, resultado);
		}
		printf("\n");
    }
    
    return(0);
}
