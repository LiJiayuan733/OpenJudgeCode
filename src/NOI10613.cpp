#include <iostream>
#include <math.h>
using namespace std;
/*
    除法的实现和取余
*/
int main(){
    int c[255]={0};
    string b;
    cin >> b;
    int l=b.length();
    for(int i=0;i<l;i++){
        c[i]=((char)b[i])-48;
    }
    bool flag=false;
    for(int i=2;i<=9;i++){
        int unc=0;
        for(int i2=0;i2<l;i2++){
            int m=c[i2]+(unc*10);
            if(m<i){
                unc=m;
                continue;
            }else{
                unc=m%i;
            }
        }
        if(unc==0){
            cout << i << " ";
            flag=true;
        }
    }
    if(!flag){
        cout << "none" << endl;
    }
}