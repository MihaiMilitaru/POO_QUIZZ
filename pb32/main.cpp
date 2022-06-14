#include <iostream>
using namespace std;
class B {
protected:
    int x;

public:
    B(int i = 28) { x = i; }
    virtual int f(B ob) { return x + ob.x + 1; }
    void afisare() { cout << x; }
};
class D : public B {
public:
    D(int i = -32)
            : B(i)
    {
    }
    int f(B ob) { return B::f(ob)-2; }
};
int main()
{
    B *p1 = new D, *p2 = new B, *p3 = new B(p1->f(*p2));
    p3->afisare();
    return 0;
}

//eroare la linia 18 ob este un alt obiect de tip B intr o metoda in clasa D iar variabilele sunt de tip protected
//solutie mostenim virtual functia f
//afiseaza -5