#include <iostream>
using namespace std;
struct student
{
    string name;
    int score;
};
bool isDown(student &a,student &b,int p);
bool isDown(student &a,student &b,int p){
    if(a.name[p]<b.name[p]){
        return true;
    }else if(a.name[p]==b.name[p]){
        return isDown(a,b,p+1);
    }else{
        return false;
    }
}
int main(){
    int size;
    cin >> size;
    struct student lise[size],temp;
    for (int i = 0; i < size; i++)
    {
        cin >> lise[i].name >> lise[i].score;
    }
    bool flag1=true;
    while(flag1){
        bool flag2=true;
        for (int i = 1; i < size; i++)
        {
            if(lise[i].score>=lise[i-1].score){
                if(lise[i].score==lise[i-1].score&&!isDown(lise[i],lise[i-1],0)){
                    continue;
                }
                swap(lise[i],lise[i-1]);
                flag2=false;
            }    
        }
        if(flag2){
            flag1=false;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << lise[i].name <<" "<<lise[i].score<<endl;
    }
    
}