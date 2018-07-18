/*************************************************************************
	> File Name: problem43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 09时48分45秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int check(int a[]){
    
    for(int i=1;i<8;i++){
        
        int sum=(a[i]*100+a[i+1]*10+a[i+2]);
        if(i==1&&sum%2!=0) return 0;
        if(i==2&&sum%3!=0) return 0;
        if(i==3&&sum%5!=0) return 0;
        if(i==4&&sum%7!=0) return 0;
        if(i==5&&sum%11!=0) return 0;
        if(i==6&&sum%13!=0) return 0;
        if(i==7&&sum%17!=0) return 0;
    }
    long long num=1;
    for(int i=0;i<10;i++){
        num=num*10+a[i];
    }

    return num;
}
int main(){

    int a[11]={0};
    long long sum=0;
    for(int i=0;i<10;i++){
        a[i]=i;
    }
    do{
        //for(int i=0;i<10;i++) printf("%d",a[i]);
        //printf("\n");
        if(check(a)!=0) sum+=check(a);
    }while(next_permutation(a,a+10));
    printf("%lld",sum);
    return 0;
}
