#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int vect[] = {1,2,3,4,5};
	int* ap;
	ap=vect;
	
	for(int i=0; i<5; i++){
	
		cout<<"Valor: "<<ap[i]<<endl;
		cout<<"Apuntador: " <<&ap[i]<<endl;
	}
	
	return 0;

}