#include<stdio.h>
#include<math.h>
int digit(int n){
	int sum =0; 
	while(n){
		sum++;
		n/=10;
	
	}
	return sum;
}	
int main(){
	int num[100];
	int p=0;
	for(int i=1000000;i>=2;i--){
		int sum=0;
		int temp=i;
		for(int j=1;j<=digit(i);j++){
			sum+=pow((temp%10),5);
			temp/=10;
		}
		if(sum==i) num[p++]=sum;
	
	}
	int pp=0;
	for(int k=0;k<p;k++){
		pp+=num[k];
	
	}
	printf("%d",pp);
}
