/*************************************************************************
	> File Name: problem21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 19时12分30秒
 ************************************************************************/
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
#define M 10000
int prime[M+5]={0};
int dnum[M+5]={0};
int main(){
    dnum[1]=1;
    for(int i=2;i<=M;i++){
        if(!prime[i]){

            prime[++prime[0]]=i;
            dnum[i]=i+1;
        }
        for(int j=1;j<=prime[0]&&prime[j]*i<=M;j++){
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
        b}
    }
    int mark[M+5]={0};
    for(int i=2;i<=30;i++){
        printf("%d\n",dnum[i]);
    }
        long long sum=0;
        for(int i=2;i<=M;i++) dnum[i]-=i;
        for(int i=2;i<=M;i++){
            for(int j=i+1;j<=M;j++){
                if(dnum[i]==j&&dnum[j]==i){
                    printf("%d %d\n",i,j);
                    sum+=i;
                    sum+=j;
                    mark[i]=1;
                    mark[j]=1;
                }
            }        
        }
    
    printf("%lld\n",sum);
    return 0;
}
