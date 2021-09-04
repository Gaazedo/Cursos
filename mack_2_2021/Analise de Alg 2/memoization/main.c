#include <stdio.h>
#include <stdlib.h>

#define N 8
int Fibo(int *cache, int n)
{

	// Se o index do cache for igual a -1 não será computado.
	if (cache[n] == -1) {
		cache[n] = Fibo(cache, n - 1) + Fibo(cache, n - 2);
	}
	return cache[n];
}

void printarArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf(i == 0 ? "[ %d" : ", %d", arr[i]);
	}
	puts(" ]\n");
}

int main(void)
{
	int r[N];
	printarArray(r, N);
	
	// inicia o Array colocando cada elemento na posição -1
	int cache[N] = { [0 ... N-1] = -1 };

	cache[0] = 0;
	cache[1] = 1;
	Fibo(cache, N - 1);
	printarArray(cache, N);
	return 0;
}