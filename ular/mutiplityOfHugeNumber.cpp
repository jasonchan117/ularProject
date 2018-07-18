/*************************************************************************
	> File Name: mutiplityOfHugeNumber.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月08日 星期二 10时27分04秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int a[1000]={0};
int  b[1000]={0};
int sum[1000]={0};
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){

        for(int i=n;i>=1;i--){
            scanf("%d",&a[i]);
        }
        for(int i=m;i>=1;i--){
            scanf("%d",&b[i]);
        }
        sum[0]=n;
        int count=0;

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                sum[j+count]+=b[i]*a[j];
            }
            if(count>=1) sum[0]++;
            for(int j=1;j<=sum[0];j++){
                if(sum[j]<10) continue;
                sum[j+1]=sum[j]/10;
                sum[j]%=10;
                sum[0]+=(j==sum[0]);
            }
            count++;
        }
        for(int i=sum[0];i>=1;i--){
            printf("%d",sum[i]);
        }
    }

    return 0;
}
