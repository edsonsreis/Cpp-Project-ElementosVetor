#include <iostream>
#include "biblioteca.h"
#define MAX 10
using namespace std;

int main()
{

int n, maior;
int cont[MAX];

for(int i=0; i<10; i++){

    cont[i] = 0;

}

cout<<"Digite o tamanho do vetor: "<<endl;
cin>>n;

int vetor[n];

ler_vetor(vetor,n);
imprime_vetor(vetor, n);
quantidade_vetor(vetor,n,cont);
maior = posicao_maior_elemento(cont, MAX);


cout<<"O elemento que mais se repete no vetor e "<<maior<<" ("<<cont[maior]<<" vezes)."<<endl;


return 0;
}
