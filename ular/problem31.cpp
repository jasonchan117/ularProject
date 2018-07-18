/*************************************************************************
	> File Name: problem31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月23日 星期一 18时04分34秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;
int money[]={0,1,2,5,10,20,50,100,200};
int memory[100000][10000]={0};
int f(int k,int n){
    if(k==1) return 1;
    if(n<0)return 0;
    if(!memory[k][n]){
        memory[k][n]=f(k-1,n)+f(k,n-money[k]);
        return memory[k][n];}
    else{
        return memory[k][n];
    }
    return f(k,n-money[k])+f(k-1,n);
}
int main(){
    printf("%d",f(8,1000)); 
    return 0;
}
