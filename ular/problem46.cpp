/*************************************************************************
	> File Name: problem46.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 11时17分41秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
#define MAX 100000005
using namespace std;
int prime[MAX]={0};
int b[MAX]={0};
int c[MAX]={0};
int main(){
    for(int i=2;i<=MAX-5;i++){
        if(!prime[i]){
            prime[++prime[0]]=i;
            b[i]=1;
        }
        for(int j=1;j<=prime[0]&&i*prime[j]<=MAX-5;j++){
            prime[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
    for(int i=2;i<=MAX/1000;i++){
        long long sum=0;
        for(int j=1;j<=1000;j++){
            sum=prime[i]+2*j*j;
            if(b[sum]==0&&sum%2==1){
                c[sum]=1;
            }
        }
    }
    for(int i=2;i<=MAX-5;i++){
        if(i%2==1&&b[i]==0&&c[i]==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
