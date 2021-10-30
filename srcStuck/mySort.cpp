#include "mySort.hpp"
template<class T>
mySort<T>::mySort(T *data){
    this->data=data;
}
//a为长度
template<class T>
void mySort<T>::SelectSort(int a){
    T temp1,temp2;
    for(int i=0;i<a;i++){
        int temp3;
        temp1=*(this->data+i);
        for(int j=i+1;j<=i;i++){
            if(temp1>*(this->data+j)){
                temp1=*(this->data+j); //   存放最小值
                temp3=j;
            }
        }
        temp2=*(this->data+i);
        *(this->data+i)=temp1;
        *(this-data+temp3)=temp2;
    }
}