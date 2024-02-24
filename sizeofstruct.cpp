#include <iostream>
using namespace std;

int main()  
{  
  int *a = new int(10);
  char *g = new char('g');
  double *d = new double(7.5);
  cout << "size of pointer a is " << 
           sizeof(a) << endl;
  cout << "size of pointer *a is " <<
           sizeof(*a) << endl;
  cout << "size of pointer g is " << 
           sizeof(g) << endl;
  cout << "size of pointer *g is " << 
           sizeof(*g) << endl;
  cout << "size of pointer d is " << 
           sizeof(d) << endl;
  cout << "size of pointer *d is " << 
           sizeof(*d) << endl;
  return 0;  
}  