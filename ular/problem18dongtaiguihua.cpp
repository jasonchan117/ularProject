/*************************************************************************
	> File Name: problem18dongtaiguihua.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 20时24分30秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int f[10000][10000];
int map[10000][10000];
int keep[10000][100000];
int main(){
    int n;
    int scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            scanf("%d",map[i]+j);
        }
    }
    f[0][0]=map[0][0];
    for(int i=1;i<n-1;i++){
        for(int j=0;j<=i;j++){
            f[i][j]=0;
            if(j<=i-1&&f[i-1][j]>f[i][j]){
                f[i][j]=f[i-1][j];
                keep[i][j]=j;
            
            }
            if(j>0&&f[i-1][j-1]>f[i][j]){
                f[i][j]=f[i-1][j-1];
                keep[i][j]=j-1;
            }
            f[i][j]+=map[i][j];
        }
    }
    int ans=0;
    int ansj;
    for(int i=0;i<n;i++){
        if(f[n-1][i]>ans) ans=f[n-1][i],ansj=i;
    }
    /*int tempi=0,tempj=0;
    int temp=f[0][0];
    while(1){
        if(f[tempi+1][tempj]>=f[tempi+1][tempj+1]) 
        {
            printf("%d %d\n",tempi+1,tempj);
            tempi=tempi+1;
        }else{
            printf("%d %d\n",tempi+1,tempj+1);
            tempi++;
            tempj++;
        }
    }*/





    for(int i=n-1;i>=0;i--){
        printf("%d,%d\n",i,ansj);
        ansj=keep[i][ansj];
    }
    printf("%d",ans);
    return 0;
}
