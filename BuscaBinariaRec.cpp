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

int busca_binaria_dois(int *V, int k, int B){
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
	
	int k = 500; //num de elementos
	int vet[k];
	int B = 8 , i;
	
	for(i=0; i<k; i++){
		vet[i] = i;
	}
	
	printf("Return: %d\n", busca_binaria(vet, k, 8));
	
	
	return 0;
}
