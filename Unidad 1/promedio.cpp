// incluir la libreria
#include<iostream>
/* utilizar todos los caracteres y funciones
de la libreria
*/
using namespace std;
// funcion principal
int main(){
	// declarar variable
	int a,b,c,d,e,promedio;
	cout<<"Bienvenido"<<endl;
	// imprimir en pantalla
	cout<<"por favor digita la primera nota"<<endl;
	cin>>a;
	// imprimir en pantalla
	cout<<"por favor digita la segunda nota"<<endl;
	cin>>b;
	// imprimir en pantalla
	cout<<"por favor digita la tercer nota"<<endl;
	cin>>c;
	//imprimir en pantalla
	cout<<"por favor digita la cuarta nota"<<endl;
	cin>>d;
	// imprimir en pantalla
	cout<<"por favor digita la quinta nota"<<endl;
	cin>>e;
	promedio= (a+b+c+d+e)/5;
	// imprimir en pantalla
	cout<<"tu promedio general es de:"<<promedio<<endl;
	// comparar
	if(promedio >=7) {
		// imprimir en pantalla
		cout<<"esta aprobado"<<endl;
	}
	else{
		// imprimir en pantalla
		cout<<"estas reprobado"<<endl;
	}
	//imprimir en pantalla
	cout<<"gracias por usar esta herramienta";
	
	return 0;
	
	
}
