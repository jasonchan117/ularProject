/*************************************************************************
	> File Name: problem33.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月23日 星期一 22时48分05秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int x,int y){

    if(y==0) return x;
    else return gcd(y,x%y);

}
int main(){
int a[3][3]={0};
    for(int i=11;i<=99;i++){
        for(int j=11;j<=99;j++){
            
            if(i%10!=0&&j%10!=0&&i!=j){
                int tempi=i;
                int tempj=j;
                while(gcd(tempi,tempj)!=1){
                    int temp=gcd(tempi,tempj);
                    tempi/=temp;
                    tempj/=temp;
                }
                a[1][1]=i/10;
                a[1][2]=i%10;
                a[2][1]=j/10;
                a[2][2]=j%10;
                if(a[1][1]==a[2][1]){
                    if(a[1][2]*tempj==tempi*a[2][2]){
                        printf("%d/%d\n",i,j);
                    }else continue;
                }else if(a[1][1]==a[2][2]){
                    if(a[1][2]*tempj==tempi*a[2][1]){
                        printf("%d/%d\n",i,j);
                    }               
                }
                else if(a[1][2]==a[2][1]){
                    if(a[1][1]*tempj==tempi*a[2][2]){
                        printf("%d/%d\n",i,j);
                    }
                }
                else if(a[1][2]==a[2][2]){
                    if(a[1][1]*tempj==tempi*a[2][1]){
                        printf("%d/%d\n",i,j);
                    }
                }
            }    
        }
    }
    return 0;
}
