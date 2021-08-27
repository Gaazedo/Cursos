#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void matriz(int *a, int r, int c)
{
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      *(a + i * c + j) = rand() % 60;
}

int somamaior(int *a, int r, int c, int &x)
{
  int soma = 0;
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    {
      soma += *(a + i * c + j);
      if (x < *(a + i * c + j))
        x = *(a + i * c + j);
    }
  return soma;
}
int main(){

int linhas,colunas;
    cout << "Digite o número de linhas da matriz: ";
  cin >> linhas;
  cout << "Digite o número de colunas da matriz: ";
  cin >> colunas;

  int matrix[linhas][colunas];
  matriz((int *)matrix, linhas, colunas);
  cout << endl;
  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
      cout << matrix[i][j] << ' ';
    cout << endl;
  }

  int &maxi = matrix[0][0], total;

  total = somamaior((int *)matrix, linhas, colunas, maxi);

  cout << endl
       << "O maior valor da matriz é " << maxi << " e a soma de seus valores fica igual a " << total << '.' << endl;




}
