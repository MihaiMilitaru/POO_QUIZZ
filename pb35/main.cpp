#include <iostream>
using namespace std;
class A {
    int x;

public:
    A(int i = 0) { x = i; }
    int operator+(const A& a) { return x + a.x; }
    template <class T>
    ostream& operator<<(ostream&);
};
template <class T>
ostream& A::operator<<(ostream& o)
{
    o << x;
    return o;
}
int main()
{
    A a1(33), a2(-21);
    cout << a1 + a2;
    return 0;
}

//eroare la linia 21 la redefinirea operatorului de afisare
//solutie int la linia 8