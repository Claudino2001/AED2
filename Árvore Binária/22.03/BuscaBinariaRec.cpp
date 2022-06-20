#include <stdio.h>

int busca_binaria(int *V, int k, int B){
	int ESQ, DIR, meio;
	ESQ = 0; DIR = k - 1;
	while(ESQ <= DIR){
		meio = (ESQ + DIR)/2;
		if(B == V[meio])
			return meio;
		else
			if(B< V[meio])
				DIR = meio - 1;
			else
				ESQ = meio + 1;		
	}
	return -1;
}

int busca_binaria_rec(int *V, int k, int B){ //recursividade
	int ESQ, DIR, meio;
	
	ESQ = 0; DIR = k - 1;

	meio = (ESQ + DIR)/2;
	
	if(B == V[meio])
		return meio;
	else
		if(B< V[meio])
			DIR = meio - 1;
		else
			ESQ = meio + 1;		

	return -1;
}

int main(void){
	
	int k = 50000; //num de elementos
	int vet[k];
	int B, i, j, p = 98;
	
	for(i=0; i<k; i++){
		vet[i] = p++;
		//printf("%d - ", p);
	}
	
	printf("Buscar pelo elemento: ");
	scanf("%d", &B);

	j = busca_binaria(vet, k, B);
	if(j<0)
		printf("Elemento nao encontrado\n");
	else
		printf("Elemento na posicao: %d\n", j);
	
	return 0;
}
