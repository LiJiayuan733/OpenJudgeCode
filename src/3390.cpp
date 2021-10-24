#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >>a >>b;

    char c[a][b];
    string line;
    for (int i = 0; i < a; i++)
    {
        cin>>line;
        int ii=0;
        string::iterator m;
        for (m=line.begin(); m<line.end(); m++)
        {
            c[i][ii]=*m;
            ii++;
        }
    }
    int count=0;
    bool h;
    for (int i = 0; i < a; i++)
    {
        for (int ii = 0; ii < b; ii++)
        {
            h=false;
            if(c[i][ii]=='#'){
                h=true;
                if(i!=0){
                    if(c[i-1][ii]=='#'){
                        h=false;
                    }
                }
                if(ii!=0){
                    if(c[i][ii-1]=='#'){
                        h=false;
                    }
                }
                if(h){
                    count++;
                }
            }   
        }
    }
    cout << count;
    
}