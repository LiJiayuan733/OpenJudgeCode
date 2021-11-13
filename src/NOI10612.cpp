#include <iostream>
#include <math.h>
/*
a的N次方
a存储进位
for(int i=个位;i<=最大位;i++){
    c=(位)*乘数+进位
    位=c%保存位数
    a=c/保存位数
}
*/
using namespace std;
int main(){
    int a[255]={0},b,c,d=0;
    cin >> b;
    a[1]=1;
    for(int i=1;i<b+1;i++){
        for(int m=1;m<256;m++){
            c=(a[m])*2+d;
            a[m]=c%10;
            d=c/10;
        }
    }
    bool flag=true;
    for (int i = 254; i >=1; i--)
    {
        if(flag==true&&a[i]!=0){
            flag=false;
        }
        if(flag){
            continue;
        }else{
            cout << a[i];
        }
        
    }
    
}