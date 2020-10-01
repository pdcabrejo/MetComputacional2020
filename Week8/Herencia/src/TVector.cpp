#include "../inc/TVector.h"

TVector::TVector(){
}

TVector::TVector(double x_, double y_): x(x_), y(y_){
}

double TVector::GetX(){ return x; }
double TVector::GetY(){ return y; }

void TVector::SetX(double x_){ x = x_;}
void TVector::SetY(double y_){ y = y_;}

void TVector::Print() const {
	std::cout << x << " " << y << std::endl;

}

TVector::~TVector(){
}

// Clase heredada

TVector3::TVector3(){
}

TVector3::TVector3(double x_, double y_, double z_): TVector(x_,y_),  z(z_){
}

void TVector3::SetZ(double z_){ x = z_; }

double TVector3::GetZ(){return z;}

void TVector3::Print() const{
  TVector::Print();
  std::cout << z << std::endl;
}


std::ostream & operator << (std::ostream &out, const TVector3 &V){

  out << V.x << " " << V.y << " " << V.z << std::endl;
  return out;
}

TVector3 operator + (const TVector3 &V1, const TVector3 &V2 ){

	TVector3 new_(V1.x+V2.x ,V1.y+V2.y, V1.z+V2.z);
	return new_;	
}

TVector3::~TVector3(){
}

