/*************************************************************************
	> File Name: problem23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 19时46分46秒
 ************************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;
#define M 1000000
int dnum[M+5]={0};
int prime[M+5]={0};
int main(){
    dnum[1]=1;
    for(int i=2;i<=M;i++){
        if(!prime[i]){
            prime[++prime[0]]=i;
            dnum[i]=1+i;
        }
        for(int j=1;j<=prime[0]&&i*prime[j]<=M;j++){

            prime[i*prime[j]]=1;
            if(i%prime[j]!=0){
                dnum[i*prime[j]]=dnum[i]*dnum[prime[j]];
            }
            else{
                int count=0;
                int temp=i;
                while(temp%prime[j]==0){
                    temp/=prime[j];
                    count++;
                }
                dnum[i*prime[j]]=dnum[temp]*((pow(prime[j],count+2)-1)/(prime[j]-1));
            }
            if(i%prime[j]==0) break;
        }
    }
    for(int i=1;i<=30;i++) printf("%d\n",dnum[i]);
    int arr[1000000]={0};
    int sum=0;
    for(int i=2;i<=M;i++){
        dnum[i]=dnum[i]-i;
        if(dnum[i]>i){
            arr[++arr[0]]=i;
        }
    }
    memset(prime,0,sizeof(prime));
    for(int i=1;i<=arr[0];i++){
        for(int j=i;j<=arr[0];j++){
            if(arr[i]+arr[j]>28123) break;
            prime[arr[i]+arr[j]]=1;
        }
    }
    long long ans=0;
    for(int i=0;i<=28123;i++){
        if(!prime[i]) ans+=i;
    }
    printf("%lld\n",ans);
    return 0;
}
