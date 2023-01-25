#include <iostream>

struct Fraction {
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction(int numerator, int denominator) {
        m_numerator = numerator;
        m_denominator = denominator;
    }

    Fraction operator + (const Fraction& other) {
        int num = m_numerator * other.m_denominator + other.m_numerator * m_denominator;
        int den = m_denominator * other.m_denominator;
        return Fraction(num, den);
    }

    Fraction operator - (const Fraction& other) {
        int num = m_numerator * other.m_denominator - other.m_numerator * m_denominator;
        int den = m_denominator * other.m_denominator;
        return Fraction(num, den);
    }

    Fraction operator * (const Fraction& other) {
        int num = m_numerator * other.m_numerator;
        int den = m_denominator * other.m_denominator;
        return Fraction(num, den);
    }

    Fraction operator / (const Fraction& other) {
        int num = m_numerator * other.m_denominator;
        int den = m_denominator * other.m_numerator;
        return Fraction(num, den);
    }

    Fraction operator - () {
        return Fraction(-m_numerator, m_denominator);
    }

    bool operator == (const Fraction& other) {
        return m_numerator * other.m_denominator == other.m_numerator * m_denominator;
    }

    bool operator != (const Fraction& other) {
        return m_numerator * other.m_denominator != other.m_numerator * m_denominator;
    }

    bool operator < (const Fraction& other) {
        return m_numerator * other.m_denominator < other.m_numerator * m_denominator;
    }

    bool operator > (const Fraction& other) {
        return other < *this;
    }

    bool operator <= (const Fraction& other) {
        return !(*this > other);
    }

    bool operator >= (const Fraction& other) {
        return !(*this < other);
    }
};


int main()
{
    return 0;
}