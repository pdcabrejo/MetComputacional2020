#include "../inc/TOrder.h"

TOrder::TOrder(){

}

TOrder::TOrder(double A_[], int size_): size(size_){

	A = new double[size];
	for(int i = 0; i < size; i++){
		A[i] = A_[i];
	}


}

void TOrder::PrintArray(){

  if(A == nullptr){
    std::cout << " Array empty " << std::endl; 
  }
  else{
	for(int i = 0; i < size; i++)
		std::cout << A[i] << std::endl;
  }

}

TOrder::~TOrder(){

}
