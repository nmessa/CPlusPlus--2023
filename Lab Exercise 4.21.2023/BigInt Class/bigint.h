#ifndef _BIGINT_H
#define _BIGINT_H

// author: Owen Astrachan
// 8/23/95, modified 7/5/96
//          modified 1/5/97
//          modified 7/1/99 
//
// re-writen for standard vector and string classes
// by nmessa on 5/19/2015
//
// implements an arbitrary precision integer class
// 
// constructors:
//
// BigInt()            -- default constructor, value of integer is 0
// BigInt(int n)       -- initialize to value of n (C++ int)
// BigInt(const apstring & s) -- initialize to value specified by s
//        it is an error if s is an invalid integer, e.g.,
//        "1234abc567".  In this case the bigint value is garbage
//
//
// *****  arithmetic operators:
//
// all arithmetic operators +, -, * are overloaded both
// in form +=, -=, *= and as binary operators
//
// multiplication also overloaded for *= int
// e.g., BigInt a *= 3 (mostly to facilitate implementation)
//
//  ***** logical operators:
//
// bool operator == (const BigInt & lhs, const BigInt & rhs)
// bool operator != (const BigInt & lhs, const BitInt & rhs)
// bool operator <  (const BigInt & lhs, const BigInt & rhs)
// bool operator <= (const BigInt & lhs, const BigInt & rhs)
// bool operator >  (const BigInt & lhs, const BigInt & rhs)
// bool operator >= (const BigInt & lhs, const BigInt & rhs)
//
//  ***** I/O operators:
//
//  void Print()
//        prints value of BigInt (member function)
//  ostream & operator << (ostream & os, const BigInt & b)
//        stream operator to print value
//
// istream & operator >> (istream & in, const BigInt & b)
//        reads whitespace delimited BigInt from input stream in
//


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BigInt
{
  public:
    
    BigInt();                    // default constructor, value = 0
    BigInt(int);                 // assign an integer value
    BigInt(const string &);    // assign a string

    // may need these in alternative implementation

    // BigInt(const BigInt &);   // copy constructor
    // ~BigInt();                // destructor
    // const BigInt & operator = (const BigInt &); // assignment operator

    // operators: arithmetic, relational

    const BigInt & operator += (const BigInt &);
    const BigInt & operator -= (const BigInt &);
    const BigInt & operator *= (const BigInt &);
    const BigInt & operator *= (int num);
   
    string ToString() const;   // convert to string
    int      ToInt()    const;   // convert to int
    double   ToDouble() const;   // convert to double 

    // facilitate operators ==, <, << without friends

    bool Equal(const BigInt & rhs)        const;
    bool LessThan(const BigInt & rhs)     const;
    void Print(ostream & os)              const;

  private:
    
    // other helper functions

    bool IsNegative()  const;    // return true iff number is negative
    bool IsPositive()  const;    // return true iff number is positive
    int  NumDigits()   const;    // return # digits in number
    
    int  GetDigit(int k) const;
    void AddSigDigit(int value);
    void ChangeDigit(int k, int value);

    void Normalize();

    // private state/instance variables

    enum Sign{positive,negative};
    Sign mySign;                 // is number positive or negative
    vector<char> myDigits;     // stores all digits of number
    int myNumDigits;             // stores # of digits of number 
};

// free functions

ostream & operator <<(ostream &, const BigInt &);
istream & operator >>(istream &, BigInt &);

BigInt operator +(const BigInt & lhs, const BigInt & rhs);
BigInt operator -(const BigInt & lhs, const BigInt & rhs);
BigInt operator *(const BigInt & lhs, const BigInt & rhs);
BigInt operator *(const BigInt & lhs, int num);
BigInt operator *(int num, const BigInt & rhs);

bool operator == (const BigInt & lhs, const BigInt & rhs);
bool operator <  (const BigInt & lhs, const BigInt & rhs);
bool operator != (const BigInt & lhs, const BigInt & rhs);
bool operator >  (const BigInt & lhs, const BigInt & rhs);
bool operator >= (const BigInt & lhs, const BigInt & rhs);
bool operator <= (const BigInt & lhs, const BigInt & rhs);


#endif   // _BIGINT_H not defined

