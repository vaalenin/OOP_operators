#include "Matrix.h"

void main ()
{
  Matrix m1 (10, 20), m2 (3, 4), m3;
  
  m3 = m2 + m1;
  cout << m3;
  
  ++m3;
  PrintMatrix  (m3);
  
  Matrix m4;
  m4 = m3;
  cout << m4;
  
  if (m1 > m2)
    cout << "m1 > m2" << endl;
  else
    cout << "m2 > m1" << endl;
    
  int s = m2 ();
  cout << "s = " << s << endl;
  
  int v1 =  m3[0];
  int v2 = m3[1];
  cout <<"v1 = " << v1 << ", v2 = " << v2 << endl;
  
  int t = static_cast <int> (m1);
  cout << "t = " << t << endl;
  
  return 0;
}
