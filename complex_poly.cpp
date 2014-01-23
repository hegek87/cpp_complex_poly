#include "complex_poly.h"

ComplexPoly::ComplexPoly(std::vector<Complex> coeff, int deg){
	this->degree = deg; this->coeffs = coeff;
}


ComplexPoly::ComplexPoly(Complex coeff[], int deg){
	for(int i = 0; i < deg+1; ++i){
		this->coeffs.push_back(coeff[i]);
	}
	this->degree = deg;
}

Complex ComplexPoly::evaluate(Complex val){
	Complex fVal = this->coeffs[0];
	for(int i = 0; i < this->degree; ++i){
		fVal = fVal + (this->coeffs[i+1] * val.pow(i+1));
	}
	return fVal;
}

std::ostream& operator<<(std::ostream& os, const ComplexPoly& cp){
	os << "(" << cp.coeffs[0] << ")";
	if(!cp.degree){ return os; }
	for(int i = 0; i < cp.degree; ++i){
		if(i == 0){
			os << " + (" << cp.coeffs[i+1] << ")";
			os << "z";
		}
		else{
			os << " + (" << cp.coeffs[i+1] << ")";
			os << "z^" << i+1;
		}
	}
	return os;
}	
