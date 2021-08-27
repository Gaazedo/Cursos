//fibonacci recursivo - Gabriel Azevedo - 32020309

//Para fazer fibonacci comparamos o valor recebido com 1 e 2,
//se for diferente fazemos n menos 1 somado com a subtração de n com 2 para termos o termo seguinte

#include <stdio.h>

int fib(int n) {
  int x;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  x = fib(n-1) + fib(n-2);
  return(x);
}


int main() {
  int n,i;
  
  printf("Quantos termos da Sequencia Fibonacci deseja visualizar? ");
  scanf("%d", &n);
  
  while(n <= 0) {
    printf("Digite um numero de termos maior que 0: ");
    scanf("%d", &n);
  }
    
  for (i = 1; i <= n; i++) {
    printf("%d ", fib(i));
  }
  printf("\n");
  return(0);
}