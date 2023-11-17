#include <iostream>
using namespace std;
int num1,num2;
int main(){
	char x;
	cout<<"Bienvenido,este programa te ayudara a realizar operaciones"<<endl;
	cout<<"ingresa el inciso que desee"<<endl;
	cout<<"a)suma"<<endl;
	cout<<"b)resta"<<endl;
	cout<<"c)multiplicacion"<<endl;
	cin>>x;
	cout<<"ingresa el primer numero para realizar la operacion"<<endl;
	cin>>num1;
	cout<<"ingresa el segundo numero para realizar la operacion"<<endl;
	cin>>num2;
	switch(x)
	{
		case 'a':
		 int suma;
		 suma = num1+num2;
		 cout<<"el resultado es"<<suma;
		break;
		case 'b':
		int resta;
		 resta = num1-num2;
		 cout<<"el resultado es"<<resta;
		break;
		case 'c':
		int multi;
		 multi = num1*num2;
		 cout<<"el resultado es"<<multi;
		break;
		default:cout<<"no existen mas incisos";
	}
	return 0;
}
