/*************************************************************************
	> File Name: zhiyingshudehe.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月08日 星期二 23时24分39秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int prime[10005]={0};
int dnum[10005]={0};
int main(){
    dnum[1]=1;
    for(int i=2;i<=10000;i++){
        if(!prime[i]){
            prime[++prime[0]]=i;
            dnum[i]=1+i;
        }
        for(int j=1;j<=prime[0]&&i*prime[j]<=10000;j++){

            prime[i*prime[j]]=1;
            if(i%prime[j]!=0){
                dnum[i*prime[j]]=dnum[i]+dnum[prime[j]]-1;
            }
            else{
                int temp=i;
                while(temp%prime[j]==0){
                    temp/=prime[j];
                }
                dnum[i*prime[j]]=dnum[temp]+dnum[prime[j]]-1;
                break;
            }
        }

    }
    for(int i=2;i<=30;i++) printf("%d\n",dnum[i]);

    return 0;
}
