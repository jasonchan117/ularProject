/*************************************************************************
	> File Name: problem37.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月25日 星期三 19时38分32秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int a[10000005]={0};
int b[10000006]={0};
int digit(int n){
    int sum=0;
    while(n){
        n/=10;
        sum++;
    }
    return sum;
}

int main(){
    int k=0;
    for(int i=2;i<=10000000;i++){
        if(!a[i]) {
            a[++a[0]]=i;
            b[i]=1;
        }
        for(int j=1;j<=a[0]&&i*a[j]<=10000000;j++){
            a[i*a[j]]=1;
            if(i%a[j]==0) break;
        }
    }
    int sum=0;
    for(int i=11;i<=1000000;i++){
        int flag=1;   
        int dig=digit(i);
        int temp=pow(10,digit(i)-1);
        int tempi=i;
        int temp2=i;
        //printf("%d\n",temp);
        if(b[i]){
            while(dig--){
                //printf("%d\n",i); 
                int tempn=tempi%temp;
                //printf("<--%d\n",tempi);
                if(!b[tempi]) flag=0;
                tempi=tempn;
                temp/=10; 
                if(!b[temp2/10]) flag=0;
                //printf("-->%d\n",temp2);
                temp2/=10;
            }
            if(flag==1) sum+=i;

            printf("%d\n",sum);
        }   
    }
    printf("%d",sum);
    //printf("%d %d %d %d %d %d %d\n",b[3797],b[797],b[97],b[7],b[379],b[37],b[3]);
    //printf("%d",j(3797));
    return 0;
}
