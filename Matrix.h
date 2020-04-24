#pragma once

#include <iostream>

std::ostream& operator << (std::ostream& os, const Matrix& m)

void PrintMatrix (const Matrix& m);

class Matrix
{
public:
  Matrix (int v1, int v2);
  ~Matrix () = default;
  
  Matrix operator+ (const Matrix& m);
  //Matrix operator- (const Matrix& m);
  //Matrix operator* (const Matrix& m);
  //Matrix operator/ (const Matrix& m);
  Matrix& operator ++ (int);
  //Matrix& operator -- (int);
  //Matrix& operator ++ ();
  //Matrix& operator -- ();
  
  Matrix& operator = (const Matrix& m);
  
  bool operator > (const Matrix& m);
  //bool operator < (const Matrix& m);
  //bool operator >= (const Matrix& m);
  //bool operator <= (const Matrix& m);
  //bool operator == (const Matrix& m);
  
  int operator () ();
  int& operator [](int index);
  
  operator int ();
  
  friend std::ostream& operator << (std::ostream& os, const Matrix& dt);
  frined void PrintMatrix (const Matrix& dt);
private:
  int val1;
  int val2;
};
