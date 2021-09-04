#include <iostream>
using namespace std;

void trocaref(int &a, int &b){
        int temp;
        temp=a;
        a=b;
        b=temp;
}

void trocapont(int *c,int *d){
        int *temp;
        temp=d;
        d=c;
        c=temp;
}

int main(){
        int a=2,b=3,c=4,d=5;
        cout<<"Antes de chamar a função por referencia:\na="<<a<<"\nb="<<b<<endl;
        trocaref(a,b);
        cout<<"Depois de chamar a função por referencia:\na="<<a<<"\nb="<<b<<endl;
        cout<<"Antes de chamar a função por ponteiros:\nc="<<c<<"\nd="<<d<<endl;
        trocapont(&c,&d);
        cout<<"Depois de chamar a função por ponteiros:\nc="<<d<<"\nd="<<c<<endl;

        return 0;
}