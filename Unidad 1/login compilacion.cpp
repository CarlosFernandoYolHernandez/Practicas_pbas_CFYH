#include <iostream>
using namespace std;

int main(){
	string user="305";
	string password="QueShow";
	string usuario,pass;
	cout<<"Ingresa tu usuario";
	getline(cin,usuario);
	cout<<"ingresa tu password";
	getline(cin,pass);
	if(usuario == user and pass == password){
		cout<<"bienvenido";
	}
	else{
		cout<<"¿Que haces aqui?";
	}
}
