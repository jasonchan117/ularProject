/*************************************************************************
	> File Name: yingzishudeshuliang.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月09日 星期三 10时32分34秒
************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int prime[10005]={0};
int dnum[10005]={0};
int main(){
    for(int i=2;i<=10000;i++){

        if(!prime[i]){
            prime[++prime[0]]=i;

            dnum[i]=2;
        }
        for(int j=1;j<=prime[0]&&i*prime[j]<=10000;j++){

            prime[i*prime[j]]=1;
            if(i%prime[j]!=0) dnum[prime[j]*i]=dnum[prime[j]]*dnum[i];
            else{
                int temp=i;
                int count=0;
                while(temp%prime[j]==0){
                    temp/=prime[j];
                    count++;    
                }

                dnum[prime[j]*i]=dnum[i]/(count+1)*(count+2);
                break;
            }
        }
    }
    for(int i=2;i<=30;i++){

        printf("%d\n",dnum[i]);
    }
    return 0;
}
