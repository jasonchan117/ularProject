/*************************************************************************
	> File Name: problem20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 18时52分15秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
#include<inttypes.h>
using namespace std;

int main(){    
    int sum[200]={0};
    sum[0]=sum[1]=1;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=sum[0];j++) sum[j]*=i;
        for(int j=1;j<=sum[0];j++){
            if(sum[j]<10) continue;
            sum[j+1]+=sum[j]/10;
            sum[j]%=10;
            sum[0]+=(j==sum[0]);
        }
    }
    int ans=0;
    for(int i=1;i<=sum[0];i++) ans+=sum[i];
    printf("%d",ans);
    return 0;
}
