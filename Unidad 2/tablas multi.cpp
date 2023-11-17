#include"iostream"
using namespace std;
int main(){
int i;
int num;
cout<<"Inserta el numero de la tabla de multiplicar que deseas"<<endl;
cin>>num;
for(i=1;i<=50;i++){
	cout<<i<<"x"<<num<<"="<<i*num<<endl;
}
return 0;
	
	
}
