/*************************************************************************
	> File Name: problem13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月22日 星期日 18时40分56秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#define BASE 16 //處理不同進制
using namespace std;
int main(){
    int sum[55]={0};
    char a[55];
    sum[0]=50;
    while(scanf("%s",a)!=EOF){
        int i=0;
        
        while(i>=0){

            sum[50-i]+=a[i]-'0';
            i--;
        }
    }
    for(int i=0;i<=sum[0];i++){
         if(sum[i]<BASE) continue;
            sum[i+1]+=sum[i]/BASE;
            sum[i]%=BASE;
            sum[0]+=(i==sum[0]);

    }//先全部求完和後再進行一次進位，提高程序效率
    int ans=0;
    char hh='A';
    for(int i=sum[0];i>sum[0]-10;i--){
        if(sum[i]>=10) printf("%c",hh+(sum[i]-10));
        else printf("%d",sum[i]);
    }
    printf("\n");
    return 0;
}

//16進制反轉時不會溢出，八進制和十進制反轉時都會溢出

