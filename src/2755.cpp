#include <iostream>
using namespace std;
void getnumber(int a[],int start,int length,int size);
int lcount=0;
int main(){
    int ln;
    cin >> ln;
    int number[ln];
    for (int i = 0; i < ln; i++)
    {
        cin >> number[i];
    }
    getnumber(number,0,ln,40);

    cout<<lcount;
}
void getnumber(int a[],int start,int length,int size){
    for(int i=start;i<length;i++){
        if(size>=a[i]){
            if(size-a[i]==0){
                lcount++;
            }else{
                getnumber(a,i+1,length,size-a[i]);
            }
        }
    }
}