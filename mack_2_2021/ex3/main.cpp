#include <iostream>
using namespace std;

int mdc(int num1, int num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

void Sequencial()
{
    int arr[5], n, i, pos;
    i=0;
    while(i<=4)
    {
        cout<<" Insira o elemento N°"<<i<<" do vetor:";
        cin>>arr[i];
        i++;
        
    }
    pos = 0;
    cout<<" Insira o valor para procurar:";
    cin>>n;
    i=0;
    while(i<=5)
    {
        
        if(n==arr[i])
        {
            
            pos++;
            break;
            
        }
        i++;
        pos++;
    }
    if(pos==0)
        cout<<" Valor não encontrado"<<endl;
    else
        cout<<" Valor encontrado na posição = "<<i<<endl;
}

int main()
{
    int num1, num2;

    cout<<"Digite o 1° Número para verificar MDC: ";
    cin>> num1;
    cout<<"Digite o 2° Número para verificar MDC: ";
    cin>> num2;
    cout<<"MDC: "<<mdc(num1, num2)<<endl;
    Sequencial();
}