#include<stdio.h>
int gcd(int x,int y){
    if(y==0) return x;
    else return gcd(y,x%y);
}
int main(){
    int sum=1;
    for(int i=1;i<=20;i++){
        int temp=gcd(sum,i);
        sum*=i/temp;

    }
    printf("%d",sum);
	return 0;
}
