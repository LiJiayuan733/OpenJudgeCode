#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int size;
    int higtestscore=0;
    string name;
    cin >> size;
    for(;size>0;size--){
        string nowname;
        int nowscore;
        cin >> nowscore;
        cin >> nowname;
        if(nowscore>higtestscore){
            higtestscore=nowscore;
            name=nowname;
        }
    }
    cout<<name<<endl;
}
