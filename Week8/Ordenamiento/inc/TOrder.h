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
		std::vector<double> GetArray();


		void GetBurbuja();
		void GetBySelection();

	private:

		double *A = NULL;
		int size;
		std::vector<double> ArrayOrdenado;
		double auxiliar = 0.;
		int minimum = 0;

		void FillVector();

	protected:

};

#endif
