#include <iostream> // std::cout, std::cin
#include <string> // std::string
#include <LaborkaConfig.h>

#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#include <math.h>
#endif

int main()
{

	const double PI = 3.14159265358979323846;

	double result = 0;

	#ifdef USE_TRIGONOMETRY_DEGREE
	result = cos_degree(45.0);
	#else
	result = cos(pi/4.0);
	#endif



	//double sin = sin_degree(90);

	std::cout<<"Rezultat: "<< std::endl;
	std::cout<<result << std::endl;


	return 0;
}
