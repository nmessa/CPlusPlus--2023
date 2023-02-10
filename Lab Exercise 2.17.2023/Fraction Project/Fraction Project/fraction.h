//Fraction Class definition file
//fraction.h
//Author: nmessa

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
	private:
		int numerator;
		int denominator;
		double decimalEquivalent;
		void reduce();
		void calcDecimalEquivalent();
		int gcd();

	public:
		Fraction();
		Fraction(int, int);
		Fraction add(Fraction);
		Fraction subtract(Fraction);
		Fraction multiply(Fraction);
		Fraction divide(Fraction);
		void reciprocate();
		int getNumerator();
		int getDenominator();
		double getDecimalEquivalent();
		void setNumerator(int);
		void setDenominator(int);
		void print();
};
#endif
