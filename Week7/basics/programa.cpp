#include <iostream>
#include <math.h>

//using namespace std;

void StartAnim();
void StartCuadro();
void EndCuadro();


int main(){

 /*
 std::cout << " Hello World! " << i << std::endl;
 std::cin >> i;  
 std::cout << " El nuevo valor es: " << i << std::endl;
 */

 int i = 0;
 float pi = 2.0*asin(1.0);
 //std::cout << pi << std::endl;
 float theta = 0.;
 // Coordenadas
 float x = 0.;
 float y = 0.;

 float r = 3.0;
 
 srand48(0.);

 StartAnim();

 for (i = 1; i < 5; i++){
    theta = drand48()*2.0*pi;

    x += cos(theta);
    y += sin(theta);

    StartCuadro();
   // std::cout << x << " " << y << std::endl;
    std::cout << " , " << x <<"+"<<r<<"*cos(t),"<<y<<"+"<<r<<"*sin(t)";
    EndCuadro(); 
 } 


 return 0;
}

void StartAnim(){

	std::cout <<"unset key"<<std::endl;
	std::cout <<"set xrange [-50:50]"<<std::endl;
	std::cout <<"set yrange [-50:50]"<<std::endl;
	std::cout <<"set size ratio -1"<<std::endl;
	std::cout <<"set parametric"<<std::endl;
	std::cout <<"set trange [0:7]"<<std::endl;
	std::cout <<"set isosamples 10"<<std::endl;

}

void StartCuadro(){
	std::cout<<"plot 0,0 ";
}

void EndCuadro(){
	std::cout<<std::endl;
}
