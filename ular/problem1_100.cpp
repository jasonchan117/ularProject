/*************************************************************************
	> File Name: problem1_100.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 19时10分21秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    static int num=1;
    printf("%d\n",num);
    if(num==100) return 0;
    num++;
    return main();
}
