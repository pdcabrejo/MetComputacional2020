#include <iostream>

// clase principal

class Persona{
public:

  Persona(double x_, double y_);
  ~Persona();

  friend class Estudiante;

private:

   double x;
   double y;
};


Persona::Persona(double x_, double y_): x(x_), y(y_){}
Persona::~Persona(){}


// Clase amiga

class Estudiante{

public:
	Estudiante();
	Estudiante(double x_, double y_);
       ~Estudiante();

	void Print() const;

private:

	Persona P = Persona(0.,0.);
};

Estudiante::Estudiante(){}

Estudiante::Estudiante(double x_, double y_): P(x_,y_) {}

void Estudiante::Print() const{
	std::cout << P.x << " " << P.y << std::endl;
}

Estudiante::~Estudiante(){}

int main(){

	Estudiante Est = Estudiante(6.,90.);
	Est.Print();	


return 0;
}
