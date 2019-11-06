#include <iostream>

#include<iostream>

using namespace std;

void relleno(int x,float **m);

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
    imprime_cabezas(x,matriz);
    imprime(x,matriz);

    }

    else{
        cout<<"El numero no esta en el rango valido"<<endl;
    }



return 0;

}



void relleno(int x,float **m){
    
    for (int i = 0; i < x; i++){
        
        for (int j = 0; j < x+2; j++){
            
            m[i][j] = i+j;
        }
    }

}

void imprime_cabezas(int x, float**m){

    float sum=0;
     for (int i =0; i <x+2 ;i++) {
         
        sum+=m[0][i];
        if (i-2 >=0){
        cout<<m[i-2][0]<<" "; 
        }
     }
    cout << endl;
    cout << sum <<endl;
}



void imprime(int x,float **m){

    for ( int j; j <x+2 ;j++) {

        for ( int i; i <x; i++) {

            cout<<" "<<m[i][j]<<" ";

    }

    cout<<endl;

    }

}

