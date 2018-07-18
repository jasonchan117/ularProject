/*************************************************************************
	> File Name: problem47.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 15时52分53秒
 ************************************************************************/

#include<stdio.h>
#include<iostream>
#define MAX_N 1000000
using namespace std;

int dnum[MAX_N+5]={0};
int prime[MAX_N+5]={0};
int main(){
    for(int i=2;i<=MAX_N;i++){

        if(!prime[0]){
            prime[++prime[0]]=i;
            dnum[i]=1;
        }
        for(int j=1;j<=prime[0];j++){
            if(prime[j]*i>MAX_N) break;
            prime[prime*i]=1;
            dnum[prime[j]*i]=dnum[i]+(i%prime[j]!=0);//這裏是求的素因子，和前面拿到題不一樣，如果i中不含prime[j]，就直接加一，就是素數就行了，但如果含有該素數作爲因子就不用加了,//便利前面存的素數，如果有該素因子，就不用加一，如果沒有該素因子，就加一
            if(i%prime[j]==0) break;
         }
    }
    for(int i=1;i<=MAX_N-3;i++){
        if(dnum[i]^4) continue;
        if(dnum[i+1]^4) continue;
        if(dnum[i+2]^4) continue;
        if(dnum[i+3]^4) continue;
        printf("%d\n",i);
        break;
    }
    return 0;
}
