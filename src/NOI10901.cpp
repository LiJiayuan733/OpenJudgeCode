#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int s;
    cin >> s;
    int number[s];
    for(int i=0;i<s;i++){
        cin >> number[i];
    }
    int find;
    cin >> find;
    for(int i=0;i<s;i++){
        if(find==number[i]){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
