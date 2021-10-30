#include <iostream>
using namespace std;
int main(){
    int line,max=0,min=10000,a;
    cin>>line;
    for(int i=0;i<line;i++)
    {
        cin>>a;
        max=a>max?a:max;
        min=a<min?a:min;
    }
    cout<<(max-min)<<endl;
    return 0;
}