#ifndef COMPLEX_POLY_H
#define COMPLEX_POLY_H
#include "../complex_num/complex.h"
#include <vector>
class ComplexPoly{
	private:
		int degree;
		std::vector<Complex> coeffs;
	public:
		ComplexPoly(std::vector<Complex>, int);
		ComplexPoly(Complex[], int);
		Complex evaluate(Complex);
		friend std::ostream& operator<<(std::ostream&, const ComplexPoly&);
};
#endif
