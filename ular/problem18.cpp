/*************************************************************************
	> File Name: problem18.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年04月29日 星期日 19时12分37秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX_N 100
int map[MAX_N][MAX_N]={0};
int f[MAX_N][MAX_N]={0};
int dfs(int  i,int j,int n){

    if(i==n) return 0;
    if(f[i][j]!=0) return f[i][j];
    int ans1=dfs(i+1,j,n);
    int ans2=dfs(i+1,j+1,n);
    f[i][j]=(ans>ans2 ? ans1 :ans2) +map[i][j];
    return f[i][j];
}
int main(){ 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        for(int j=0;j<=i;j++){

            scanf("%d",&map[i][j];
        }
    }
    printf("%d\n",dfs(0,0,n));
    return 0;
}
