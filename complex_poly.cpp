#include "complex_poly.h"

ComplexPoly::ComplexPoly(std::vector<Complex> coeff, int deg){
	this->degree = deg; this->coeffs = coeff;
}

/*
ComplexPoly::ComplexPoly(Complex coeff[], int deg){
	std::vector<Complex> *t = new std::vector<Complex>();
	for(int i = 0; i < deg+1; ++i){
		t->push_back(coeff[i]);
	}
	this->degree = deg; this->coeffs = t;
}*/

Complex ComplexPoly::evaluate(Complex val){
	return Complex(0,0);
}
	
		
