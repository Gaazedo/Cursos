//Gabriel Azevedo - 32020309 (04N)

#include <iostream>
using namespace std;

void maximoMinimo(int *v, int *N, int *maximo, int *minimo) {
  int NumElementos;
  int max;
  int min;
  int a[100];


  for (int i = 0; i < *N; i++) 
  { 
    cout << "Digite o elemento " << (i+1) <<":";
    cin >> a[i];

  }
  max = a[0];
  min = a[0];

  for (int i = 0; i < *N; i++) {

    if (a[i] > max)
      max = a[i];
    else if (a[i] < min)
      min = a[i];

  }

  cout << "\n O menor valor digitado foi: " << min << "\n";
  cout << "\n O maior valor digitado foi: " << max << "\n";

}


int main() {
  int Num;
  int j[100];
  int max1;
  int min1;
  cout << "Digite o numero de elementos do Array :" << endl;
  cin >> Num;
  maximoMinimo(j,&Num,&max1,&min1);



}