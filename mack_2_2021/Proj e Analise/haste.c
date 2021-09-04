#include <limits.h>
#include <stdio.h>

// funcao para pegar o max e min de dois inteiros
int max(int a, int b) { return (a > b) ? a : b; }

/* Retorna o melhor preco para a haste de tamanho n com valores diferentes para pedacos diferentes */

int haste(int preco[], int n)
{
	if (n <= 0)
		return 0;
	int val_max = INT_MIN;

	// Corta a haste e compara
	for (int i = 0; i < n; i++)
		val_max = max(val_max, preco[i] + haste(preco, n - i - 1));

	return val_max;
}

int main()
{
	int arr[] = { 1, 4, 7, 9, 10, 12, 18, 23 };
	int tamanho = sizeof(arr) / sizeof(arr[0]);
	printf("O maior valor obtido é: %d", haste(arr, tamanho));
	getchar();
	return 0;
}
