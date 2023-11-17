#define tope 2023
#define meses 12
#define dias 24
#define horas 60
#define minutos 60
#define segundos 60
//declaramos las funciones que se utilizaran
#include <iostream>
#include <windows.h> 
#include <stdio.h>
//declaramos las librerias se utilizaran
using namespace std;
//accedemos a todas las funciones de las librerias
int an,mes,dia,hora,minuto,w,seg,x= 0;
int multiplica(int a,int b){
	return a*b;
	//declaramos variables globales
}
int resta(int a,int b){
	return a-b;
}//funcion resta
int main(){
	string user = "Fernando";
	//definimos el usuario 
	string password = "ferhernandez";
	//definimos la contraseña
	string usuario,pass;
	cout<<"Ingresa tu usuario";
	cin>>usuario;
	cout<<"Ingresa tu password";
	cin>>pass;
	if(usuario == user and pass == password){
		//comparamos que la contraseña y usuario sean correctos 
		do 
		{
					cout<<"Bienvenido,este programa contendra varias rutinas las cuales podras elegir"<<endl;
			cout<<"ingresa el número de la rutina que desees"<<endl;
			cout<<"1 Hola mundo"<<endl;
			cout<<"2 Promedio"<<endl;
			cout<<"3 Portada con iostream"<<endl;
			cout<<"4 vocal o consonante"<<endl;
			cout<<"5 lados de un triangulo"<<endl;
			cout<<"6 for 1 a 100"<<endl;
			cout<<"7 for 100 a 0"<<endl;
			cout<<"8 for numeros pares"<<endl;
			cout<<"9 cronometro"<<endl;
			cout<<"10 calcular edad"<<endl;
			cout<<"11 tablas de multiplicar"<<endl;
			cout<<"12 dias de la semana"<<endl;
			//pedimos cual es la rutina que quiere ejecutar
			cin>>x;
			//guardamos en la variable
			switch(x)
			// ponemos la variable que compararemos 
		{
			case 1:{			
				cout<<"hola mundo programadores"<<endl;
				//si x es=1
			break;
		}
			case 2:{
			
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
	//si x es=2
			break;
		}
			case 3:{
					cout<<"Nombre:Carlos Fernando Yol Hernandez"<<endl;
	                cout<<"Edad:16"<<endl;
	                cout<<"Correo:cyol2422@conalepmex.edu.mx"<<endl;
                    cout<<"Carrera:Profesional Tecnico Bachiller en informatica"<<endl;
	                cout<<"Modulo:Programacion basica"<<endl;
	                //si x es=3
			break;
		}
			case 4:{
				char letra;
                cout<<"Inserta una letra";
cin>>letra;
 if(letra == 'a'){
 	cout<<"es vocal";
 }
 else if(letra == 'e'){
 	cout<<"es vocal";
 }
 else if(letra == 'i'){
 	cout<<"es vocal";
 }
 else if(letra == 'o'){
 	cout<<"es vocal";
 }
 else if(letra == 'u'){
 	cout<<"es vocal"<<endl;
 }
 else{
 	cout<<"no es vocal";
 }
				//si x es=4
			break;
		}
			case 5:{
			
				float lado1,lado2,lado3;
	std:: string nombre;
	cout<<"¡Bienvenido! este programa te ayudara a saber que tipo de triangulo tienes basandose en las medidas de sus lados"<<endl;
	cout<<"¿Cual es tu nombre?"<<endl;
	cin>>nombre;
	cout<<"Inserta el primer lado del triangulo"<<endl;
	cin>>lado1;
	cout<<"Inserta el segundo lado del triangulo"<<endl;
    cin>>lado2;
	cout<<"Inserta el tercer lado del triangulo"<<endl;
	cin>>lado3;
	if(lado1==lado2 and lado2==lado3 and lado1==lado3){
		cout<<"tu triangulo es equilatero"<<endl;
	}
	else if(lado2==lado1 or lado2==lado3 or lado1==lado3){
		cout<<"tu triangulo es isosceles"<<endl;
	}
	else if(lado1 != lado2 and lado2 != lado3 and lado1 != lado3){
		cout<<"tu triangulo es escaleno"<<endl;
	}
	else{
		cout<<"tu no tienes un triangulo"<<endl;
	}
    cout<<"Gracias por usar este programa:"<<nombre;
    //si x es=5
			break;
		}
			case 6:{
				int j;
             for(j=1;j<100;j++){
	          cout<<j<<endl;
              }
              //si x es=6
			break;
		}
			case 7:{
				int l;
                for(l=100;l>=0;l--){
	            cout<<l<<endl;
                }
                //si x es=7
			break;
		}
			case 8:{
				int i;
                for(i=0;i<=100;i+=2){
	            cout<<i<<endl;
                }
                //si x es=8
			break;
		}
			case 9:{
					int h = 0,m = 0, s =0;
           	while(1){
		
		    if(s>=60){
			s = 0;
			m++;
			
			if(m>=60){
				m=0;
				h++;
			}
		}
           system("cls");
           cout<<h<<":"<<m<<":"<<s;
          Sleep(1000);
          s++;
		//si x es=9
	}
			break;
		}
			case 10:{
				cout<<"digita tu año de nacimiento";
	cin>>an;
	w = resta (tope,an);
	mes= multiplica (w,meses);
	dia = multiplica (mes,dias);
	hora = multiplica (dia,horas);
	minuto = multiplica(hora,minutos);
	seg = multiplica (minuto,segundos);
	cout<<"haz vivido"<<endl;
	cout<<w<<"años"<<endl;
	cout<<mes<<"meses"<<endl;
	cout<<dia<<"dias"<<endl;
	cout<<hora<<"horas"<<endl;
	cout<<minuto<<"minutos"<<endl;
	cout<<seg<<"segundos"<<endl;
	//si x es=10
			break;
		}
			case 11:{
				int i;
int num;
cout<<"Inserta el numero de la tabla de multiplicar que deseas"<<endl;
cin>>num;
for(i=1;i<=50;i++){
	cout<<i<<"x"<<num<<"="<<i*num<<endl;
	//si x es=11
}
			break;
		}
			case 12:{
				int dia;
	cout<<"ingresa un número de dia";
	cin>>dia;
	switch(dia)
	   {
		case 1:cout<<"El dia es lunes"<<endl;
		break;
		case 2:cout<<"El dia es martes"<<endl;
		break;
		case 3:cout<<"El dia es miercoles"<<endl;
		break;
		case 4:cout<<"El dia es jueves"<<endl;
		break;
		case 5:cout<<"El dia es viernes";
		break;
		case 6:cout<<"El dia es sabado";
		break;
		case 7:cout<<"El dia es domingo";
		break;
		default:cout<<"no existen mas dias de la semana";
	   }
			break;
		}
			default:cout<<"opcion no valida "<<endl;
			cout<<"ingresa nuevamente otra opcion"<<endl;
		}
	}
	//si x es=12
		while(x>=12);
		system("cls");
	
	
	
	
	
		}
		else{
		cout<<"Usuario o contraseña incorrecta";
	}//si la contraseña o el usuario es incorrecto
		
		return 0;
}
