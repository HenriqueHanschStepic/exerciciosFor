#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	  int soma = 0,
		num = 0,	i = 0;
			
	for (i = 1; i <= 10; i++) {
		printf("Escreva o %dº: ", i);
		scanf("%d", &num);
        soma = soma + num;
    }
    printf("\nSoma: %d\n", soma);
    return(0);
}
