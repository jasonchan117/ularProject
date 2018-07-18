/*************************************************************************
	> File Name: problem29.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 09时58分22秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Tuple{
    int p,a;
};
int prime[105]={0};
struct Tuple M[10000][12]={0};
int M_num=0;

void get_M(int a,int b,struct Tuple *M){

    int m_len=0;
    while(a!=1){
        int p_num=0,pre=prime[a];
        while(a%pre==0){
            a/=pre;
            p_num++;
        }
        M[m_len].p=pre;
        M[m_len].a=p_num*b;
        m_len++;
    }
    return;
}
int main(){
    for(int i=2;i<=100;i++){
        if(prime[i]) continue;
        for(int j=i;j<=100;j+=i){
            if(prime[j]) continue;
            prime[j]=i;//這裏對素數賽做了封裝，數組的內容爲最小的那個素因子
        }
    }
    for(int a=2;a<=100;a++){
        for(int b=2;b<=100;b++){
            struct Tuple temp_M[4]={0};//100以內的數最多能分解成四個素數相乘
            get_M(a,b,temp_M);
            int flag=1;
            for(int i=0;i<M_num&&flag;i++){
                flag=memcmp(M[i],temp_M,sizeof(temp_M));
            }
            if(flag){
                memcpy(M[M_num++],temp_M,sizeof(temp_M));
                //把get_M函數的返回的結構題數組進行記錄
            }
        }
    }
    printf("%d",m_len);
    return 0;
}
