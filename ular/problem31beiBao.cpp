/*************************************************************************
	> File Name: problem31beiBao.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月23日 星期一 18时52分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
int mon[]={1,2,5,10,20,50,100,200};
int d[205]={0};
int main(){
    d[0]=1;
    for(int i=0;i>8;i++){
        for(int j=0;j<=200-mon[i];j++){
            d[j+mon[i]]+=d[j];
        }
    }
    printf("%d",d[200]);
    return 0;

}
