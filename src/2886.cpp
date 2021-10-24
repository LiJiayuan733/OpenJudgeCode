#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        n-=n%3;
        cout << (((1+n/3)*(n/3)*3)/2)<<endl;
    }
}