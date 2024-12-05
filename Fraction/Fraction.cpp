
#include "Fraction.h"
#include <iostream>

  
   Fraction::Fraction(int num, int denom){
       numerator = num;
       denominator = denom;
   }
   Fraction::Fraction(const Fraction& x){
       numerator = x.numerator;
       denominator = x.denominator;
   }
   int Fraction::getNumerator() const{
       return numerator;
   }
   int Fraction::getDenominator() const{
       return denominator;
   }
   void Fraction::setNumerator(int num){
      numerator = num;
   }
   void Fraction::setDenominator(int denom){
       denominator=denom;
   }
   Fraction Fraction::operator+(Fraction const &x){
     int num=numerator*x.denominator+denominator*x.numerator;
     int denom=denominator*x.denominator;
     Fraction sum(num, denom);
     sum.simplify();
     return sum;
   }
   Fraction Fraction::operator-(Fraction const &x){
     int num=numerator*x.denominator-denominator*x.numerator;
     int denom=denominator*x.denominator;
     Fraction difference(num, denom);
     difference.simplify();
     return difference;
   }
   Fraction Fraction::operator*(Fraction const &x){
       int num=numerator*x.numerator;
       int denom = denominator*x.denominator;
       Fraction product(num,denom);
       product.simplify();
       return product;
   }
   Fraction Fraction::operator/(Fraction const &x){
       int num=numerator*x.denominator;
       int denom = denominator*x.numerator;
       Fraction quotient(num,denom);
       quotient.simplify();
       return quotient;
   }
   void Fraction::print() const{
       if(denominator==1)
       std::cout<<numerator<<std::endl;
       else
       std::cout<<numerator<<" / "<<denominator<<std::endl;
   }
   void Fraction::simplify(){
       int max =0, gcd = 1;
       if(numerator>denominator)
        max=numerator;
        else
        max=denominator;
        for (int i=2;i<=max/2; i++)
            if(numerator%i==0&&denominator%i==0)
            gcd = i;
            
        numerator/=gcd;
        denominator/=gcd;
   }
