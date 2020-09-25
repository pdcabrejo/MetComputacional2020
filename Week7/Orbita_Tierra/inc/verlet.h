

const double G = (6.67e-11*pow(6.68e-12,3))/( 5e-31*pow(1.15e-5,2));
const double Ms = 1.;

double GetPosition(double current_x, double previous_x, double a, double deltat){

	double newx = 0.;
	newx = 2.0*current_x - previous_x + a*pow(deltat,2);
	return newx;

}

void GetAcce(double x, double y, double &ax, double &ay){

	double d = sqrt(pow(x,2) + pow(y,2));
	ax = -(G*Ms*x)/pow(d,3);
	ay = -(G*Ms*y)/pow(d,3);
}


double GetVel(double xs, double xa, double deltat){
 
	double v = 0.;
	v = (xs+xa)/(2.0*deltat);
	return v;

}

