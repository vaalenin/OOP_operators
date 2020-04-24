#pragma once

class Matrix
{
public:
  Matrix (int v1, int v2);
  ~Matrix () = default;
  
  Matrix operator+ (const Matrix& m);
  Matrix& operator ++ (int);
  
  operator int ();
private:
  int val1;
  int val2;
};
