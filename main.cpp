#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream inFile;
    inFile.open("./test.in",ios::in);
    if(!inFile.is_open()){
        cout << "文件打开失败" << endl;
        return;
    }
    string buf;
    while(getline(inFile,buf)){
        cout << buf << endl;
    }
}