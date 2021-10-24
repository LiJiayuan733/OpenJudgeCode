#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

map<string,string> dic;
map<string,int>number;

void loadDIC();
void lineNumber();
void printInfo();
void sRemove(string& s,char& p);
int main() {
    loadDIC();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        lineNumber();
    }
    printInfo();
    return 0;
}
void printInfo(){
    bool isnone=true;
    map<string,int>::iterator iter=number.begin();
    while (iter!=number.end())
    {
        if(iter->second>1){
            isnone=false;
            string num=iter->first;
            string count=to_string(iter->second);
            cout<<num<<" "<<count<<endl;
        }
        iter++;
    }
    if(isnone){
        cout<<"No duplicates."<<endl;
    }
    return;
}
void sRemove(string& s,char& p){
    string::iterator m;
    for(m=s.begin();m<s.end();m++){
        if(*m==p){
            s.erase(m);
            m--;
        }
    }
}
void lineNumber(){
    string i,numbe="000-0000";
    cin>>i;
    char del='-';
    sRemove(i,del);
   
    if(i.length()!=7){
        return;
    }
    for(int ii=0;ii<7;ii++){
        string m=string(1,i.at(ii));
        if(dic.find(m)!=dic.end()){
            string f=dic[m];
            if(ii>2){
                numbe[ii+1]=f.at(0);
            }else{
                numbe[ii]=f.at(0);
            }
        }else{
            return;
        }
    }
    if(number.find(numbe)!=number.end()){
        number[numbe]=number[numbe]+1;
    }else{
        number[numbe]=1;
    }
    return;
}
void loadDIC(){
    dic["0"]="0";
    dic["1"]="1";
    dic["2"]="2";
    dic["3"]="3";
    dic["4"]="4";
    dic["5"]="5";
    dic["6"]="6";
    dic["7"]="7";
    dic["8"]="8";
    dic["9"]="9";
    dic["-"]="-";
    dic["A"]="2";
    dic["B"]="2";
    dic["C"]="2";
    dic["D"]="3";
    dic["E"]="3";
    dic["F"]="3";
    dic["G"]="4";
    dic["H"]="4";
    dic["I"]="4";
    dic["J"]="5";
    dic["K"]="5";
    dic["L"]="5";
    dic["M"]="6";
    dic["N"]="6";
    dic["O"]="6";
    dic["P"]="7";
    dic["R"]="7";
    dic["S"]="7";
    dic["T"]="8";
    dic["U"]="8";
    dic["V"]="8";
    dic["W"]="9";
    dic["X"]="9";
    dic["Y"]="9";
}