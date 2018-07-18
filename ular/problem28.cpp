#include<stdio.h>
int main(){
	int sum=1;
	for(int i=2;i<=501;i++){
		int temp=(2*i-1)*(2*i-1);
		sum+=temp;
		int Temp;
		sum+=temp-(2*i-2);
		temp-=(2*i-2);
		sum+=temp-(2*i-2);
		temp-=(2*i-2);
		sum+=temp-(2*i-2);
		
	
	}
	printf("%d",sum);
}
