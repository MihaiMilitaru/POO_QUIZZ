#include <iostream>
using namespace std;

struct cls {
    int x;

public:
    int set_x(int i)
    {
        int y = x;
        x = i;
        return x;
    }
    int get_x() { return x; }
};
int main()
{
    cls* p = new cls[100];
    int i = 0;
    for (; i < 50; i++)
        p[i].set_x(i);
    for (i = 5; i < 20; i++)
        cout << p[i].get_x() << " ";
    return 0;
}

//afiseaza 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19