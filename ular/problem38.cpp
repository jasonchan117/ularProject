/*************************************************************************
	> File Name: problem38.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 09时21分10秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int isPandigital(int t,int num[]){
    while(t){
        int temp=t%10;
        if(temp==0) return 0;
        if(num[temp]) return 0;
        num[temp]=1;
        t/=10;
    }
    return 1;
}
int check(int x){
    int num[10]={0};
    
    int value;
    int temp_ans=0;
    for(int i=1;;i++){
        int t=x*i;
        if(!isPandigital(t,num)) return 0;
        value=pow(10,floor(log10(t))+1);
        temp_ans=temp_ans*value+t;
        //printf("%d\n",temp_ans);
        int digit=floor(log10(temp_ans))+1;
        if(digit>9) return 0;
        if(digit==9) break;
    }
    return temp_ans;
}
int main(){
    
    int max=-1;
    for(int i=1;i<=10000;i++){
        int ans=check(i);    
        if(ans>=max) max=ans;
    }
    printf("%d\n",max);
    return 0;
}
