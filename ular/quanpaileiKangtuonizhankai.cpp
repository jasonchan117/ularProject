/*************************************************************************
	> File Name: quanpaileiKangtuonizhankai.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月09日 星期三 17时01分04秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int jiechen(int x){
    int sum=1;
    for(int i=1;i<=x-1;i++){
        sum*=i;
    }
    return sum;
}
int main(){

    int n,m;
    while(~scanf("%d %d",&n,&m)){
        int nn[n]={0};
        for(int i=0;i<n;i++){
            int z=jiechen(n-i);
            int temp=m/z+1;
            int num=0;
            for(int j=0;j<n;j++){
                num+=(!nn[j]);
                if(num==temp){
                    printf("%d",j);
                    nn[j]=1;
                    break;
                } 
            }
            m%=z;
        }
    }
    return 0;
}
