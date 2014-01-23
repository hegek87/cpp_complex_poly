#include "complex_poly.h"
#include <iostream>


int main(void){
	std::cout << "HI" << std::endl;
	Complex c1(1,2), c2(3,1), c3(4,2), c4(2,2);
	std::vector<Complex> coeff;
	coeff.push_back(c1); coeff.push_back(c2); coeff.push_back(c3);
	ComplexPoly poly(coeff, 2);
	Complex res = poly.evaluate(c4);
	std::cout << res << std::endl;
	return 0;
}
