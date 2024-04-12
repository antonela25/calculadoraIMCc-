
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){

 float peso=0;
 float altura=0;
 float imcDeUsuario;

 cout<< "ingrese su peso en kg: ";
 cin>> peso;

 cout<< "ingrese su altura en metros: ";
 cin>> altura;

 imcDeUsuario = peso / pow(altura,2);

 if (imcDeUsuario < 16.5) {
    cout<< "usted se encuentre con bajo peso severo. ";
}else if (imcDeUsuario >= 16.5 && imcDeUsuario <18.5){
    cout<< "usted se encuentra con bajo peso. ";

}else if (imcDeUsuario >= 18.5 && imcDeUsuario < 25 ){
    cout<< "usted se encuentra en un peso normal. ";

}else if (imcDeUsuario >= 25 && imcDeUsuario <30) {
    cout<< "usted se encuentra con sobre peso. ";

}else if (imcDeUsuario >= 30 && imcDeUsuario <35) {
    cout<< "usted se encuentra con con obesidad tipo 1(moderada). ";

}else if (imcDeUsuario >= 35 && imcDeUsuario <40) {
    cout<< "usted se encuentra con con obesidad tipo 1(severa). ";

}else  {
    cout<< "usted se encuentra con con obesidad tipo 1(moderada). ";
 }

 cout<< "su IMC es: " <<setprecision(2) << imcDeUsuario << "kg/m² " ;

 return 0;
 }
