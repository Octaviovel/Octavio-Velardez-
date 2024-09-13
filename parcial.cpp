#include <iostream>


using namespace std;


int main(){
    int opcionMenu;


    do{
        cout << "Bienvenido al menu" << endl;
        cout << "1. determinar si el año es bisiesto o no" << endl;
        cout << "2. armar la tabla de multiplicar inversa" << endl;
        cout << "3. escribe numeros y determinar cuales son multiplos de 3 y 5" << endl;
        cout << "4. salir del programa" << endl;


        switch(opcionMenu){
        case 1:
            int anioBisiesto ;

            cout << "ingrese el año que desee" << endl;
            cin >> anioBisiesto;

            if(anioBisiesto%4){
                cout << "el anio que ingreso es bisiesto" << endl;
            }else
            if(anioBisiesto%100){
                cout << "el anio que ingreso no es bisiesto" endl;
            if(aniobisiesto%400){
                cout << "el anio que ingreso es bisiesto" << endl;
            }

            break;


        case 2:
            int numeroIngresado;

            cout << "ingresar el numero que quiera" << endl;
            cin >> numeroIngresado;

           for(int i=10; i<=1; i++);

            cout << "la tabla del" << numeroIngresado << "*" << i << cout << "es " << endl;

            break;

        case 3:
            int numero;
            cout << "ingrese la cantidad de numeros que desee" << endl;
            cin >> numero;


            if(numero%3==0){
                cout << "Fizz" << endl;

            }else

            if(numero%5==0){
                cout << "Buzz" << endl;

            }else

            if(numero%3, 5==0)
                cout << "FizzBuzz" << endl;




        }


    }while(opcionMenu !=4);





return 0;
}
