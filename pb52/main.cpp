#include <iostream>
using namespace std;
class B
{ protected: static int x;
             int i;
  public: B() { x++; i=1; }
          ~B() { x--; cout << "b";}
          static int get_x () { return x; }
          int get_i() { return i; } };
int B::x;
class D: public B
{ public: D() { x++; }
          ~D() { x--; cout << "d";} };
int f(B *q)
{ return (q->get_x())+1; }
int main()
{ B *p=new B[10];
  cout<<f(p);
  delete[] p;
  p=new D;
  cout<<f(p);
  delete p;

  cout<<D::get_x();
  return 0;
}

//eroare la linia 24, x ul este static deci si getter.ul trebuie facut static
// afiseaza 11bbbbbbbbbb3b1