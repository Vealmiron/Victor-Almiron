#include<iostream>

using namespace std;

bisiesto(){
int fecha;

    cout<<"ingrese una fecha"<<endl;
    cin>> fecha;

    if(fecha %4 !=0 ||( fecha %100 ==0 && fecha % 400!=0)){
            cout<<fecha<<" No es bisiesto"<<endl;}
    else{
     cout<<fecha<<" Es bisiesto"<<endl;

}

}

multi(){

     int num;
     int r;

    cout<<"ingrese un numero"<<endl;
    cin>> num;

    for(int i=10; i >= 1 ; i--){
        r=num*i;
        cout<<num<<" X "<<i<<" = "<<r<<endl;


}

}

int main(){

    int opcion;

    do{

        cout << " Menu de ejercicios"<<endl;
        cout << " 1--bisiesto"<<endl;
        cout << " 2--multiplicar inversa"<<endl;
        cout << " 3--Efervesecia"<<endl;
        cout << " 4-- SALIR"<<endl;
        cin >> opcion;

        switch(opcion){
        case 1:
                bisiesto();
                cout << endl;
                break;

        case 2: multi();
                cout << endl;
                break;

        case 3: cout<<" Eligio Fizz Buzz"<<endl;
        break;

       default:
                cout << "Opcion no valida " << endl;
        }
    } while(opcion != 4);



    return 0;


}









