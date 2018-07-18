/*************************************************************************
	> File Name: problem14hu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 16时21分15秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
#include<inttypes.h>
#define MAX_N 1000000
#define KEEP_LENGTH 1000000
int keep[KEEP_LENGTH]={0};
int64_t f(int64_t x){



    if(x==1) return 1;
    if(x<=KEEP_LENGTH&&keep[x]) return keep[x];
    int ans;
    if(x&1){
        ans= f(3*x+1)+1;

    }else{
        ans= f(x>>1)+1;
    }
    if(x<=KEEP_LENGTH) keep[x]=ans;
    return ans;
}

int main(){
    int max_length=0;
    int ans_num=-1;
    for(int i=1;i<=MAX_N;i++){

        int temp=f(i);
        if(temp>max_length){
            ans_num=i;
            max_length=temp;
        }
    }
    printf("%d",ans_num);
    return 0;
}





//數據越大，記憶化時間越長，和cpu緩存有關，cpu在記憶化中對數據的訪問方法稱爲隨機訪問。
