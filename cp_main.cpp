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
	
	Complex c5(2,3), c6(3,4), c7(8,2);
	Complex data[3] = {c5,c6,c7};
	ComplexPoly cp(data, 2);
	Complex result = cp.evaluate(c4);
	std::cout << result << std::endl;
	std::cout << cp << std::endl;
	return 0;
}
