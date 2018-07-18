/*************************************************************************
	> File Name: problem35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月25日 星期三 18时26分56秒
 ************************************************************************/
#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int a[1000005]={0};
int b[1000005]={0};
/*int digit(int n){
    int c[100]={0};
    int i=0;
    int temp=n;
    int ans=log10(n);
    int Ans=pow(10,ans)*10;
    int Temp=ans+1;
    int TTemp=Temp+1;
    while(TTemp--){
        c[i]=temp%Ans;
        i++;
        Ans/=10;
    }
    int m=0;
    int flag=1;
    while(m<Temp){
        int tempp=ans;
        int sum=0;
        for(int j=m;j<Temp;j++){
            sum+=(c[j%Temp]*pow(10,tempp--));
        }
        printf("++%d++\n",sum);
        if(!b[sum]){
            flag=0;
            break;
        }
        m++;
    }   
    if(flag==0) return 0;
    else return 1;
}*/
int digit(int n){
    int tempn=n;
    int c[100]={0};
    int ans=log10(n)+1;//有多少位
    int temp=pow(10,log10(n));
    for(int i=0;i<ans;i++){
        c[i]=tempn%10;
        tempn/=10;

    }
    reverse(c,c+ans);
    int tempans=ans;
    int m=0
    while(1){
        int s=1;
        int sum=0;
        for(int i=m;i<ans;i++){
            sum+=(c[i%ans)]*s);
            s*=10;
        }
        printf("%d\n",sum);
        m++;
        if(m==ans) break;
    }    

}
int main(){

    for(int i=2;i<=1000000;i++){
        if(!a[i]){
            a[++a[0]]=i;
            b[i]=1;
        }
        for(int j=1;j<=a[0]&&i*a[j]<=1000000;j++){
            a[i*a[j]]=1;
            if(i%a[j]==0) break;
        }
    }
    int sum=0;
    /*for(int i=2;i<=1000005;i++){
        if(b[i]){
            if(digit(i)) sum++;

        }
    }*/
    printf("%d",digit(197));
    //printf("%d\n",sum);
    return 0;
}
