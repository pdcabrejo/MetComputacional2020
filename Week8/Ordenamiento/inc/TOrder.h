#ifndef TOrder_H
#define TOrder_H

#include <iostream>
#include <vector>
#include <random>


class TOrder{

	public:
		TOrder();
		~TOrder();
		TOrder(double A_[], int size_);
		void PrintArray();

	private:

		double *A = NULL;
		int size;

	protected:

};

#endif
