#include <iostream>
using namespace std;
/*
    std::to_string 转换成字符串
    std::stoi to int
    std::stol to long
    std::stoll to long longs
*/
int main() {
    float a;
    float b=0;
    for(int i=0;i<12;i++){
        cin>>a;
        b+=a;
    }
    printf("$%.2lf\r\n",b/12);
    return 0;
}