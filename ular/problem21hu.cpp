/*************************************************************************
	> File Name: problem21hu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 19时19分06秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    for(int i=2;i<=100000;i++){

        if(!a[i]){
            a[++a[0]]=i;
            b[i][0]=1;
        } 
        
        for(int j=1;j<=a[0]&&i*a[j]<=100000;j++){
            a[i*a[j]]=1;
            int temp=i;
            int count=0;
            while(1){
                temp%=a[j];
                count++;
            }
            while(count--){
                b[i][k++]=pow(a[j],count);
            }
            if(i%a[j]==0) break;
        }
    }
    return 0;
}
