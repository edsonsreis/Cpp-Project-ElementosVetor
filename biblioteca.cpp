#include<iostream>
#include "biblioteca.h"
using namespace std;






void ler_vetor(int vetor[], int n){
    cout<<"Informe cada um dos elementos do vetor: "<<endl;
    for(int i=0; i<n; i++){
        cin>>vetor[i];
    }

}

void imprime_vetor(int vetor[], int n){

    cout<<"V = [";
    for(int i=0; i<n; i++){
        cout<<" "<<vetor[i];
    }

    cout<<"]"<<endl;
}

int posicao_maior_elemento(int cont[], int n){

    int maior = 0;

    for(int i=1; i<n; i++){
            if(cont[i] > cont[maior]){
                maior = i;
            }
    }
    return maior;
}

void quantidade_vetor(int vetor[], int n, int cont[]){


    for(int i=0; i<9; i++){

        for(int j=0; j<n; j++){
            if(i == vetor[j]){
            cont[i] = cont[i]+1;
            }
        }



    }


}

