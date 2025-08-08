#include <iostream>
#include <cmath>
using namespace std;
string multiplode4(int x){
    return(x%4==0? "True" : "False");
}

string parimpar(int x){
    return(x%2==0? "Par" : "Impar");
}

int soma2num(int a,int b){
    int x=0;
    if(a>b){
        for(int i=b;i<a+1;i++){
            x=x+i;
        }
    }
    else{
        for(int i=a;i<b+1;i++){
            x=x+i;
        }
    }
    return x;
}

int raio(int R){
    R= (4*3,14159*pow(R,3))/3;
    return R;
}

int fatorial(int f){
    int x=1;
    for(int i=1 ; i<=f; i++){
        x*=i;
    }
    
    return x;
}

int expoente(int b,int e){
    int x=b;
    
    for(int i=1 ; i<e ; i++){
        x*=b;
    }
    
    return x; 
}

int main(){
    int valor=0,vaalor=0,R=0,e=0;
    cin>>valor;
    cin>>vaalor;
    cin>>R;
    cin>>e;
    
    cout<<multiplode4(valor)<<endl;
    
    cout<<parimpar(valor)<<endl;
    
    cout<<soma2num(valor,vaalor)<<endl;
    
    cout<<raio(R)<<endl;
    
    cout<<fatorial(valor)<<endl;

    cout<<expoente(valor,e)<<endl;
    
    return 0;
}
/*
C)
1.Funçoes são partes do codigo que ficam antes do main para que o main fique mais bonito e organizado.

2.Argumentos/Parâmetros serve para que possa usar variavei e não precisar usar pré definiçoes.

3.Tipos de função são por exeplo int, float, char, string, etc.

4.É uma função que não retorna nada.

5.Os tipos podem ser int, float,char,etc.