#include "Header.hpp"


Fractions::Fractions(int num, int den = 1) : m_numerator(num), m_denominator(den) {
	if (den == 0) {
		throw Error_zero_denominator();
	}
	if (den < 0) {
		num *= -1;
		den *= -1;
	}
}


void Fractions::reduction() {
	int temp = std::gcd(m_numerator, m_denominator);
	m_numerator /= temp;
	m_denominator /= temp;
}


Fractions::operator double() { return double(m_numerator) / m_denominator; }


std::ostream& operator<< (std::ostream& out, const Fractions& fraction) {
	out << fraction.m_numerator << "/" << fraction.m_denominator;
	return out;
}


std::istream& operator>> (std::istream& in, Fractions& fraction) {
	in >> fraction.m_numerator;
	in >> fraction.m_denominator;

	if (fraction.m_denominator == 0)
	{
		fraction.m_denominator = 1;
		throw Error_zero_denominator();
	}
	if (fraction.m_denominator < 0)
	{
		fraction.m_numerator *= -1;
		fraction.m_denominator *= -1;
	}

	fraction.reduction();
	return in;
}


Fractions& Fractions::operator+= (const Fractions& other) {
	m_numerator = m_numerator * other.m_denominator + other.m_numerator * m_denominator;
	m_denominator *= other.m_denominator;

	(*this).reduction();
	return (*this);
}


Fractions& Fractions::operator-= (const Fractions& other) {
	m_numerator = m_numerator * other.m_denominator - other.m_numerator * m_denominator;
	m_denominator *= other.m_denominator;

	(*this).reduction();
	return *this;
}


Fractions& Fractions::operator*= (const Fractions& other) {
	m_numerator *= other.m_numerator;
	m_denominator *= other.m_denominator;

	(*this).reduction();
	return *this;
}


Fractions& Fractions::operator/= (const Fractions& other) {
	if (other.m_numerator == 0) { 
		throw Error_zero_denominator();
	}

	m_numerator *= other.m_denominator;
	m_denominator *= other.m_numerator;

	if (m_denominator < 0) {
		m_denominator *= -1;
		m_numerator *= -1;
	}

	(*this).reduction();
	return *this;
}


Fractions operator+ (const Fractions& lhs, const Fractions& rhs) {
	Fractions tmp = lhs;
	return Fractions(tmp += rhs);
}


Fractions operator- (const Fractions& lhs, const Fractions& rhs) {
	Fractions tmp = lhs;
	return Fractions(tmp -= rhs);
}


Fractions operator* (const Fractions& lhs, const Fractions& rhs) {
	Fractions tmp = lhs;
	return Fractions(tmp *= rhs);
}


Fractions operator/ (const Fractions& lhs, const Fractions& rhs) {
	Fractions tmp = lhs;
	return Fractions(tmp /= rhs);
}


Fractions& Fractions::operator++ () { 
	m_numerator += m_denominator;

	return *this;
}


Fractions& Fractions::operator-- () {
	m_numerator -= m_denominator;

	return *this;
}


Fractions Fractions::operator++ (int) {
	Fractions tmp = *this;
	m_numerator += m_denominator;

	return tmp;
}


Fractions Fractions::operator-- (int) {
	Fractions tmp = *this;
	m_numerator -= m_denominator;

	return tmp;
}


bool operator== (const Fractions& lhs, const Fractions& rhs) {
	return(((lhs - rhs).m_numerator == 0));
}


bool operator!= (const Fractions& lhs, const Fractions& rhs) {
	return(((lhs - rhs).m_numerator != 0));
}


bool operator> (const Fractions& lhs, const Fractions& rhs) {
	return(((lhs - rhs).m_numerator > 0));
}


bool operator>= (const Fractions& lhs, const Fractions& rhs) {
	return(((lhs - rhs).m_numerator >= 0));
}


bool operator< (const Fractions& lhs, const Fractions& rhs) {
	return(((lhs - rhs).m_numerator < 0));
}


bool operator<= (const Fractions& lhs, const Fractions& rhs) {
	return(((lhs - rhs).m_numerator <= 0));
}