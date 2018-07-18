/*************************************************************************
	> File Name: yingzhishudehe.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月09日 星期三 10时48分05秒
 ************************************************************************/
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int prime[10005]={0};
int dnum[10005]={0};
int main(){
    dnum[1]=1;
    for(int i=2;i<=10000;i++){

        if(!prime[i]){

            prime[++prime[0]]=i;
            dnum[i]=i+1;
        }
        for(int j=1;j<=prime[0]&&i*prime[j]<=10000;j++){
            prime[i*prime[j]]=1;
            if(i%prime[j]!=0){

                dnum[i*prime[j]]=dnum[i]*prime[j];
            }
            else{
                int count=0;
                int temp=i;
                while(temp%prime[j]==0){
                    temp/=prime[j];
                    count++;
                }
                dnum[i*prime[j]]=dnum[temp]*(pow(prime[j],count+2)-1)/(prime[j]-1);
                break;
            }

        }
    }
    for(int i=2;i<=30;i++){
        printf("%d\n",dnum[i]);
    }
    
    return 0;
}
