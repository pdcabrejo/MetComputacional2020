#include "../inc/TVector.h"


int main(){

	TVector V1(5.,10.);
	std::cout << V1.GetX() << std::endl;
        V1.SetX(560.);
	std::cout << V1.GetX() << std::endl;


	V1.Print();

	TVector3 V2(0.2,3.3,6.);
	V2.SetX(6.3);
	std::cout << V2.GetX() << std::endl;

	V2.Print();

	std::cout << " Escritura mejorada de la informacion " << std::endl; 

	std::cout << V2;

	TVector3 V3(1,1,1);
	TVector3 V4(0.2,3.3,6.);

	V4 = V2+V3;

	std::cout << V4;


	return 0;
}
