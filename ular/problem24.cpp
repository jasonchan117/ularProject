/*************************************************************************
	> File Name: problem24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 19时52分30秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int get_num(int x,int n,int *num,int delta){
    int rank=n/delta+1;
    int now=0;
    for(int i=0;i<x;i++){
        now+=!(num[i]);
        if(now==rank) return i;
    }
    return -1;
}
long long  jie(int a){
    long long temp=1;
    for(int i=1;i<=a-1;i++){
        temp*=i;
    }
    return temp;
}
int main(){ 
    int x,y;
    while(~scanf("%d %d",&x,&y)){
            int n=y;
            //int n = 126;
            int num[x]={0};
            //int delta=120;
            long delta=jie(x);//delta代表的是当一位改变是，改变的状态数
            for(int i=0;i<x;i++){
            int digit=get_num(x,n,num,delta);
            printf("%d",digit);
            num[digit]=1;
            n%=delta;
            if(i==x-1) break;
            delta/=(x-1-i);
        }
    }
}
