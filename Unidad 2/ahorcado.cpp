#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int  main(){
	
	char frase[60],rep[100],temporal[100];
	char pal;
	int longitud,i,j,inicial,correcto=0,temp=0,oportunidades = 100,acertado=0,gano;
	int repetido=0, ganador =0;
	cout<<"Bienvenido al juego del ahorcado\n\n";
	cout<<"digita la palabra a resolver";
	gets(frase);
	system("cls");
	longitud=0;
	inicial=0;
	j=0;
	rep[0]=' ';
	rep[1]='\0';
	
	do{
		
		system("cls");
		temp=0;
		if(inicial=0){
			
			for(i=0; i<strlen(frase);i++){
				
				if(frase[i]=' '){
					temporal[i]=' ';
					longitud= ++;
					
					
				}
				else{
					temporal[i]='_';
					longitud ++;
				}
			}
			
		}

	inicial=1;
	temporal[longitud] = '\0';
	for(i=0;i<strlen(rep);i++)
	{
		if(rep[i]==pal){
			repetido=1;
			break;
		}
		else{
			repetido=0;
		}
	}
	if(repetido== 0)
	{
		for(i=0;i<strlen(frase);i ++){
			if(frase[i]== pal){
				temporal[i]=pal;
				acertado ++;
				temp=1;
			}
		}
		
	}
	if(repetido==0){
		if(temp==0){
			oportunidades= oportunidades -1;
			
		}
	}
	else{
		cout<<"Ya se ha introducido este caracter o letra";
		cout<<"\n\n";
		
	}
	cout<<"\n";
	for(i=0;i<strlen(temporal);i++)
	{
		cout<<temporal[i];
	}
	cout<<"\n";
	if(strcmp(frase,temporal)==0)
	{
		gano=1;
		break;
	}
	cout<<"\n Letras acertadas:"<<acertado;
	cout<<"\n Oportunidades restantes:"<<oportunidades;
	cout<<"\n";
	rep[j]=pal;
	j++;
	if(oportunidades==0){
		break;
	}
	cout<<"introduzca una letra";
	cin>>pal;
}
while(oportunidades !=0);
if(gano)
{
	cout<<"\n\n WINNER";
}
	else{
		cout<<"\n\n No le sabes bro,perdiste UnU";
	}
	cout<<"\n\n";
	cin.get();
	return 0;
}
