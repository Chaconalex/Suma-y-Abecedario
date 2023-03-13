#include <iostream>
#include <windows.h>
using namespace std;


int main(){
		COORD coord = {0,0};
		
	int num1, num2, res;

	coord.X = 50;
	coord.Y = 10;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	cout<<"Ingrese el primer valor: ";
	cin>>num1;
	
	coord.X = 50;
	coord.Y = 11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	cout<<"Ingrese el segundo valor: ";
	cin>>num2;
	
	coord.X = 50;
	coord.Y = 12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	res=num1+num2;
	cout<<"La suma es: "<<res<<endl;
	
	coord.X = 50;
	coord.Y = 13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	res=num1-num2;
	cout<<"La resta es: "<<res<<endl;

	coord.X = 50;
	coord.Y = 14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	res=num1*num2;
	cout<<"La multiplicacion es: "<<res<<endl;
	
	coord.X = 50;
	coord.Y = 15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	res=num1/num2;
	cout<<"La division es: "<<res<<endl;
	
	
	return 0;
}
