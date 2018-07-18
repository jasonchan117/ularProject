/*************************************************************************
	> File Name: problem12test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月07日 星期一 22时24分12秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
#define M 100000000
using namespace std;
int prime[M+5]={0};
int dnum[M+5]={0};
int main(){
    for(int i=2;i<=M;i++){
        if(!prime[i]){
            prime[++prime[0]]=i;
            dnum[i]=2;
        }
        for(int j=1;j<=prime[0]&&i*prime[j]<=M;j++){
            prime[i*prime[j]]=1;

            if(i%prime[j]!=0){
                dnum[i*prime[j]]=dnum[i]*dnum[prime[j]];
            }else{
                int temp=i;
                int count=0;
                while(temp%prime[j]==0){
                    temp/=prime[j];
                    count++;
                }
                dnum[i*prime[j]]=(dnum[i]/(count+1))*(count+2);
            }

            if(i%prime[j]==0) break;

        }
    }
    //for(int i=2;i<=50;i++) printf("%d\n",dnum[i]);
    long long sum=0;
    for(int i=1;;i++){
        sum+=i;
        if(dnum[sum]>=500){
            printf("%lld\n",sum);
            break;
        }
    }
    
    return 0;
}
