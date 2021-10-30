#include <iostream>
using namespace std;
int main()
{
    string a, b;
    int p, y, l, m = 0, h = 0, t = 0, c;
    char x, g;
    cin >> c;
    for (; c > 0; c--)
    {
        t = 0;
        cin >> a >> p >> y >> g >> x >> l;
        if (p > 80 && l > 0)
            t = t + 8000;
        if (p > 85 && y > 80)
            t = t + 4000;
        if (p > 90)
            t = t + 2000;
        if (p > 85 && x == 'Y')
            t = t + 1000;
        if (y > 80 && g == 'Y')
            t = t + 850;
        h = h + t;
        if (t > m)
        {
            m = t;
            b = a;
        }
    }
    cout << b << endl;
    cout << m << endl;
    cout << h << endl;
    return 0;
}