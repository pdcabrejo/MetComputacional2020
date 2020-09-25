#include <iostream>
#include <math.h>
#include <fstream>
#include "../inc/animacion.h"
#include "../inc/verlet.h"



int main(int argc, char *argv[]){


  if(argc == 1){
	  std::cout << " Su codigo necesita el numero de anios solares " << std::endl;
	 exit(1); 
  }

 int Size = 365*std::stod(argv[1]);
 double deltat = 1.;

 Size = int(Size/deltat);

 double *X = new double[Size]; 
 double *Y = new double[Size]; 

 double *Vx = new double[Size]; 
 double *Vy = new double[Size]; 

 double *time = new double[Size];
 double *Energy = new double[Size];
 
 double t = 0.;


 double x0 = 1; // au
// double x0 = 1.665861; // au
 double y0 = 0;
 double vx0 = 0.;
 double vy0 = 0.01721420632; // au/dias
// double vy0 = 0.010694857; // au/dias
 double ax = 0.;
 double ay = 0.; 


 
 // Llenemos las primeras posiones
 
 X[0] = x0;
 Y[0] = y0;
 Vx[0] = vx0;
 Vy[0] = vy0;

 X[1] = x0 + vx0*deltat; //Euler
 Y[1] = y0 + vy0*deltat;

 Energy[0] = 0.5*( pow(Vx[0], 2) + pow(Vy[0], 2) ) - G/sqrt( pow(X[0],2)+pow(Y[0],2)) ; 



 // iterando sobre las posiciones

 for(int i = 0; i < Size; i++){

	time[i] = t;
	t += deltat;

	if(i == 0 || i == 1) continue;
 
	GetAcce(X[i-1],Y[i-1],ax,ay);
	X[i] = GetPosition(X[i-1],X[i-2],ax,deltat);
	Y[i] = GetPosition(Y[i-1],Y[i-2],ay,deltat);

 } 

 
 for (int i = 1; i < Size-1; i++){
	Vx[i] = GetVel(X[i+1],X[i-1],deltat);
	Vy[i] = GetVel(Y[i+1],Y[i-1],deltat);
	Energy[i] =  0.5*( pow(Vx[i],2) + pow(Vy[i],2) ) - G/sqrt(pow(X[i],2)+pow(Y[i],2)) ;
 }

 std::ofstream *File = new std::ofstream[2];
 File[0].open("data/Energy.dat",std::ofstream::trunc);
 File[1].open("data/Trayectory.dat",std::ofstream::trunc);



  // Generando la animacion

 StartAnim();
 double rsun = 0.2;
 double rearth = 0.15;
 double Xsun[1] = {0.};
 double Ysun[1] = {0.};

 for (int i = 1; i < Size-1; i++){
 
	 StartCuadro();
	 GetPoint(Xsun[0],Ysun[0],rsun);
	 GetPoint(X[i],Y[i],rearth);
	 EndCuadro();

      	 File[0] << time[i] << " " << Energy[i] << std::endl;
	 File[1] << X[i] << " " << Y[i] << std::endl;
  }



 delete[] X;
 delete[] Y;
 delete[] Vx;
 delete[] Vy;
 delete[] Energy;
 delete[] time;


 return 0;

}

