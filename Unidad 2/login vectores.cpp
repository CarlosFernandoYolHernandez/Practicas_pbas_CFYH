#include<cstdlib>
#include<iostream>
#include<conio.h> // version de id conio conio2
#include<string.h>
#include<vector>
// definimos teclas
#define ENTER 13
#define BACKSPACE 8
using namespace std;
// declaramos las variables para las operaciones
int num1 , num2, num3 ,res;
// declaramos la funcion principal

class Usuario {
public:
    string nombre;
    string apellido;
    int edad;

    void mostrarPerfil() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

int main(){
	Usuario user;
// declaramos las variables de las opciones a elegir
int opc;
int opc1;
// declaramos los vectores para usuarios y contraseñas
vector<string> usuarios;
vector<string> pass;
// se definen los usuarios de el vector
usuarios.push_back("fernando");
usuarios.push_back("marvin");
usuarios.push_back("marco");
usuarios.push_back("Ariana");
// se definen los password de el vector
pass.push_back("12345");
pass.push_back("54321");
pass.push_back("hola");
pass.push_back("usuario");
// se declarar las variables de login
string usuario1, password;
// se declara la variable al contador
int contador = 0;
bool ingresa = false;
// declaramos el ciclo para verificar el password
do{
   system("cls");
   cout<<"\t\t\t login de usuario IscjlchavezG"<<endl;
   cout<<"\t\t\t-------------------------------"<<endl;
   cout<<"\n\t Usuario: ";
   getline(cin,usuario1);
   char caracter;
   cout<<"\t Password: ";
   caracter = getch();
   password = "";
   while(caracter != ENTER){
    if(caracter != BACKSPACE){
        password.push_back(caracter);
        cout<<"*";
       }
       else{
        if(password.length()>0){
            cout<<"\b \b";
            password = password.substr(0, password.length()-1);
           }
       }
       caracter = getch();
   }
   for(int i = 0; i< usuarios.size(); i++){
    if(usuarios[i] == usuario1 && pass[i] == password){
        ingresa = true;
        break;
       }
   }
   if(!ingresa){
    cout<<"\n\n El usuario y/o contraseña no son correctos."<<endl;
    cout<<"\n Tienes 3 intentos para ingresar al sistema: Total de intentos: "<<contador+1<<endl;
    cin.get();
    contador++;
   }
} // termina do de login 
while(ingresa == false && contador < 3);
    if(ingresa == false){
        cout<<"\n Revaso el numero de intentos permitidos. Hasta luego"<<endl;
    }
else{
do{
    system("cls");
    cout<<"\n";
    cout<<"\t\t\t Bienvenido al Menu de Usuario: "<< usuario1<<endl;
    cout<<"\t\t\t ------------------------------------------"<<endl;
    cout<<"\t\t\t 1.- Registro"<<endl;
    cout<<"\t\t\t 2.- Ver perfil"<<endl;
    cout<<"\t\t\t 3.- Multiplicacion"<<endl;
    cout<<"\n";
    cout<<"\t\t\t Ingrese una opcion: ";
    cin>>opc;
    switch(opc){ // inicia el ciclo do while 
        case 1:
           system("cls");
            // Crear un objeto de la clase Usuario
    Usuario usuario;

    // Obtener la información del usuario
    cout << "Ingrese el nombre: ";
    getline(cin, usuario.nombre);

    cout << "Ingrese el apellido: ";
    getline(cin, usuario.apellido);

    cout << "Ingrese la edad: ";
    cin >> usuario.edad;

    // Mostrar el perfil del usuario
    cout << "\nPerfil del Usuario:\n";
    usuario.mostrarPerfil();

    // Crear o abrir un archivo de texto para escribir el perfil del usuario
    ofstream archivo("perfil_user.txt");

    // Verificar si el archivo se abrió correctamente
    else {
        cout << "Error al abrir el archivo.\n";
    }
   
        break;
        case 2:
        	 if (archivo.is_open()) {
        // Escribir la información del usuario en el archivo
        archivo << "Nombre: " << usuario.nombre << endl;
        archivo << "Apellido: " << usuario.apellido << endl;
        archivo << "Edad: " << usuario.edad << " años" << endl;

        // Cerrar el archivo
        archivo.close();

        cout << "\nPerfil del usuario guardado en 'perfil_usuario.txt'.\n";
    } 
    else {
        cout << "Error al abrir el archivo.\n";
    }
         
        break;
        case 3:
           system("cls");   
           cout<<"bienvenido a la multiplicacion"<<endl;
           cout<<"Digita los numero enteros a multiplicacion"<<endl;
           cout<<"Digita el primer numero";
           cin>>num1;
           cout<<"Digita el segundo numero :";
           cin>>num2;
           cout<<"Digita el tercer numero :";
           cin>>num3;
           res = num1*num2*num3;
           cout<<"El resultado de la multiplicacion es: "<<res;
        break;
        default:
            system("cls");
            cout<<"\t\t\t Seleccionaste una opcion no valida"; 
        break;  
    } // termina el do
    cout<<"\t\t\t Deseas seguir con el programa?"<<endl;
    cout<<"\t\t\t 1.- Si"<<endl;
    cout<<"\t\t\t 2.- No"<<endl;
    cout<<"\t\t\t Selecciona una opcion: ";
    cin>>opc1;
} // termina do while
while(opc1 == 1);
} 
cin.get();
return 0;

}
