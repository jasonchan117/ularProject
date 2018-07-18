/*************************************************************************
	> File Name: problem44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 10时50分32秒
 ************************************************************************/
#include<math.h>
#include<iostream>
#include<stdio.h>
#include<inttypes.h>
using namespace std;
int a[100000005]={0};
long long getValue(long long n){
    long long p=(n*(n*3-1))/2;
    return p;
}
int isPentagonal(long long x){
    if(x<=100000000){
        if(a[x]){
            return 1;
        }
    }
    long long min=1;
    long long max=x;
    long long  mid;
    while(min<=max){
        long long temp;
        mid=(min+max)/2;
        temp=getValue(mid);
        if(x<temp){
            max=mid-1;
        }
        else if(x>temp){
            min=mid+1;
        }
        else if(x==temp) {
            if(x<=100000000&&a[x]==0){
                a[x]=1;
            }
            return 1;
        }
    }
    return 0;
}
int newton(long long  x){
    long long temp=x/2;
    while(true){
        long long temp2=((3/2)*temp*temp+x)/(3*temp-1/2);
        if(getValue(temp2)==x) return 1;
        if(temp2<=0) return 0;
        temp=temp2;
    }
    return 0;
}
int main(){
    long long max=100000000;
    for(long long i=1;;i++){
        long long p1,p2;
        p1=getValue(i);
        p2=getValue(i-1);
        if(p1<=100000000){
            a[p1]=1;
            a[p2]=1;
        }
        if(p1-p2>max) break;
        for(long long j=i-1;j>=1;j--){
            p2=getValue(j);
            if(p2<=100000000) a[p2]=1;
            if(p1-p2>=max) break;
            if(newton(p1+p2)&&newton(p1-p2)){
                max=p1-p2;
            }
        }
    }
    printf("%lld",max);
    return 0;
}
