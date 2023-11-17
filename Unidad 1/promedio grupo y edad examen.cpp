#include <stdlib.h>
#include <iostream.h>
using namespace std;
int nota1,nota2,nota3,nota4,nota5,Edad,Prome;
int main () {
	string grupo;
	printf("ingresa nota 1");
	scanf("% d", nota1);
	printf("ingresa nota 2");
	scanf("% d", nota2);
	printf("ingresa nota 3");
	scanf("% d", nota3);
	printf("ingresa nota 4");
	scanf("% d", nota4);
	printf("ingresa nota 5");
	scanf("% d", nota5);
	printf("ingresa tu grupo");
	scanf("% c", grupo);
	printf("ingresa tu edad");
	scanf("% d", Edad);
	Prome=(nota1+nota2+nota3+nota4+nota5)/5
	if(Prome>=7){
		printf("eres competente");
	}
	else{("no eres competente");
	}
	if(grupo==305){
		printf("programas");
	}
	else{("eres de medios digitales");
	}
	if(Edad>=18){
		printf("eres mayor");
	}
	else{("eres menor");
	}
	cinget();
	return 0;
}

