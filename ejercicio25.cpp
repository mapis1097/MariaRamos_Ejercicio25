#include <iostream>

#include<iostream>

using namespace std;

void rellenos(int x,float **m);

void imprime_cabezas(int x,float **m);

void imprime(int x,float **m);

int main(){

    cout<<"Escriba un numero del 3 al 11"<<endl;

    int x=0;

    cin>>x;

    if(x>=3 && x<=11){

        float ** matriz = new float *[x];
        for (int i =0; i < x; ++i){
            matriz[i] = new float[x+2];
        }

relleno(x,matriz);

imprimecabezass(x,matriz);


    }

    else{
        cout<<"El numero no esta en el rango valido"<<endl;
    }



return 
0;

}



void relleno(int x,float **m){
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x+2 ; j++){
            m[i][j] = i+j;
            cout<< m[i][j] <<endl;
        }
    }

}

void imprimecabezas(x, **m){

    float sum=0;

    for (i =0; i <x;i++) {

        cout<<m[i][0]<<" "; 
        sum+=m[i][0];


}



void imprime(int x,float **m){

    for ( j < x+2 ;j++) {

        for ( i <x;i++) {

            cout<<" "<<m[i][j]<<" ";

    }

    cout<<endl;

    }

}

