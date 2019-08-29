#include <iostream>

using namespace std;

struct Mascotas{
	char nombre[20];
	int edad;
}mascota1,mascota2,mascota3;

int main(int argc, char**argv){
	
	cout<<"Nombre: ";
	cin.getline(mascota1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>mascota1.edad;
	
	cout<<mascota1.nombre<<endl;
	cout<<mascota1.edad<<endl;


	system("pause");
	return 0;
}
