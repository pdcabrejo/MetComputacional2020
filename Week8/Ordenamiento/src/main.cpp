#include "../inc/TOrder.h"

int main(){

	double MyArray[] = {3.,5.,11.,6.,12.,9.,1.};

	int size = sizeof(MyArray)/sizeof(MyArray[0]);

        // Creamos el objeto
	//
	TOrder MyOrdenamiento(MyArray, size);
	MyOrdenamiento.PrintArray();
	//std::cout << MyOrdenamiento.A << std::endl;



	return 0;
}
