#include <iostream>
#include "twoFindTree.hpp"
/*
二叉树一维化后 就成为x轴
*/
using namespace std;
template <class T> 
twoFindTree<T>::twoFindTree(T key){
    this->key=key;
}
/*
打印树
*/
template <class T> 
void twoFindTree<T>::print(){
    if(this->left!=NULL){
        this->left.print();
    }
    cout << this->key;
    if(this->right!=NULL){
        this->right.print();
    }
}
/*
查找树
*/
template <class T>
twoFindTree<T>& twoFindTree<T>::search(T k){
    if(k==null or k == this->key){
        return this;
    }
    if(k<this->key){
        return this->left.search(k);
    }else{
        return this->right.search(k);
    }
}
template <class T>
twoFindTree<T>& twoFindTree<T>::gmax(){
    if(this->right==NULL){
        return this;
    }else{
        return this->right.gmax();
    }
}
template <class T>
twoFindTree<T>& twoFindTree<T>::gmin(){
    if(this->left==NULL){
        return this;
    }else{
        return this->left.gmin();
    }
}
/*
第一个比他大的
*/
template <class T>
twoFindTree<T>& twoFindTree<T>::successor(){
    if(this->right!=NULL){
        return right;
    }
    twoFindTree<T>& p,lp;
    lp=this;
    p=this->parent;
    while(p!=NULL&&p.left!=lp){
        lp=p;
        p=p.parent;
    }
    return p;
}
/*
    插入
*/
template <class T>
twoFindTree<T>& twoFindTree<T>::ist(twoFindTree<T>& objecct){
    if(objecct->key<this->key){
        if(this->left==NULL){
            this->left=objecct;
            objecct.parent=this;
        }else{
            this->left.insert(objecct);
        }
    }else{
        if(this->right==NULL){
            this->right=objecct;
            objecct.parent=this;
        }else{
            this->left.insert(objecct);
        }
    }
}
/*
删除
*/
template <class T>
twoFindTree<T>& twoFindTree<T>::dlt(){
    if(this->left==NULL&&this->right==NULL){
        delete this->key;
        delete this;
        return;
    }
    if(this->parent->key>this->key){
        if(this->right==NULL){
            this->parent->left=this->left;
            this->left->parent=this->parent;
        }else{
            this->parent->left=this->right;
            this->right->parent=this->parent;

            if(this->left!=NULL){
                this->right->left=this->left;
                this->left->parent=this->right;
            }
        }
    }else{
        if(this->left==NULL){
            this->parent->right=this->right;
            this->right->parent=this->parent;
        }else{
            this->parent->right=this->left;
            this->left->parent=this->parent;

            if(this->right!=NULL){
                this->left->right=this->right;
                this->right->parent=this->left;
            }
        }
    }
    delete this->key;
    delete this;
}