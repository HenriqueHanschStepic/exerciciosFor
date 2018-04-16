#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	  int soma = 0,
		num = 0,	cont = 0;
			
	for (cont = 1; cont <= 10; cont++) {
		printf("Escreva o %dº: ", cont);
		scanf("%d", &num);
        soma = soma + num;
    }
    printf("\nSoma: %d\n", soma);
    return(0);
}
