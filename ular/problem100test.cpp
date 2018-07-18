/*************************************************************************
	> File Name: problem100test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月08日 星期二 10时16分05秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int a[205]={0};
int main(){
    a[0]=1;
    a[1]=1;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=a[0];j++){

            a[j]*=i;
        }
        for(int j=1;j<=a[0];j++){
            if(a[j]<10) continue;
            a[j+1]+=a[j]/10;
            a[j]%=10;
            a[0]+=(j==a[0]);
        }
    }
    long long sum=0;
    for(int i=1;i<=a[0];i++){
        sum+=a[i];
    }
    printf("%lld\n",sum);
    return 0;
}
