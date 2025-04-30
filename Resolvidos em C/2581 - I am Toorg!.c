#include <stdio.h>

int main() {
	int N;
	char pergunta[100];

	scanf("%i", &N);

	while(N) {
        scanf(" %[^\n]", pergunta);
		printf("I am Toorg!\n");
		N--;
	}

	return 0;
}