#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int Hate;
    int HateLevel=-1;
    for (int i = 0; i < 7; i++)
    {
        int nowclass,nowmom;
        cin >> nowclass >> nowmom;
        if(nowclass+nowmom>8){
            if(nowclass+nowmom-8>HateLevel){
                Hate=i+1;
                HateLevel=nowclass+nowmom-8;
            }
        }
    }
    if(HateLevel==-1){
        cout << "0" <<endl;
    }else{
        cout << Hate <<endl;
    }
}
