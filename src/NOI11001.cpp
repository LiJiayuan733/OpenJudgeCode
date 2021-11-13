#include <iostream>
using namespace std;
struct xs
{
    string s;
    double a;
} a[1000];
int main()
{
    int n, k, i, j, t;
    cin >> n >> k;
    for (i = 0; i < n; i++)
        cin >> a[i].s >> a[i].a;
    for (i = 1; i < n; ++i)
        for (j = 0; j < n - i; ++j)
            if (a[j].a < a[j + 1].a)
                swap(a[j], a[j + 1]);
    cout << a[k - 1].s << ' ' << a[k - 1].a;
    return 0;
}