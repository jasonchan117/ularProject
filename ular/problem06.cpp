#include<stdio.h>
int main(){
	long long sum=0;
	long long num=0;
	for(int i=1;i<=100;i++){
	
		sum+=i*i;
		num+=i;
	
	}
	printf("%lld",num*num-sum);
	return 0;

}
