#ifndef TVector_H
#define TVector_H

#include <iostream>


class TVector{

	public: // Accesible para todos los ambitos

		TVector();
		TVector(double, double);
		~TVector();

		void SetX(double);
		void SetY(double);

                double GetX();
		double GetY();

		virtual void Print() const;

	private: // Accesible para miembros de la clase


	protected: // accesibles por metodos propios y por classes hija, (heredadas)

		double x;
		double y;

};

class TVector3 : public TVector { // Heredar todos los metodos publicos y protected de la clase madre


	public:
		TVector3();
		TVector3(double, double, double); // Respetar el orden cronologico
		~TVector3();

		void SetZ(double);
		double GetZ();
		void Print() const;


		friend std::ostream & operator << (std::ostream &out, const TVector3 &V);
		friend TVector3 operator + (const TVector3 &V1, const TVector3 &V2);

	private:

		double z;
};


#endif
