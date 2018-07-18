/*************************************************************************
	> File Name: problem26.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 09时07分44秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int get_circle_length(int d){
    int first_index[1000]={0};
    first_index[1]=1;
    int y=1;
    int index=1;
    do{
        first_index[y]=index++;
        y=(y*10)%d;//這裏的y在計算下一個後，出現重復了，沒有標記下標值就跳出循環了，就用當前的下標值減去y第一次出現的位置
    }while(y&&first_index[y]==0);
    if(y==0) return 0;
    return index-first_index[y];//當前的下標值減去y第一次出現的下標值
}
int main(){
    int ans_num;
    int max_length=0;
    for(int i=2;i<=999;i++){
        if(get_circle_length(i)>max_length){
            ans_num=i;
            max_length=get_circle_length(i)
        }
    } 
    printf("%d\n",ans_num);
    return 0;
}
