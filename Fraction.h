class Fraction{
 private:
  int numerator;
  int denominator;

public:
   
   Fraction(int num, int denom);
   Fraction(const Fraction& x);
   int getNumerator() const;
   int getDenominator() const;
   void setNumerator(int num);
   void setDenominator(int denom);
   Fraction operator+(Fraction const &x);
   Fraction operator-(Fraction const &x);
   Fraction operator*(Fraction const &x);
   Fraction operator/(Fraction const &x);
   void print() const;
   void simplify();
   
};
