#include<stdio.h>

int check_pal(int n){
	int check[1000];
	int k=0;
	int temp=n;
	while(temp){
	
		check[k++]=temp%10;
		temp/=10;
	}
	int flag1=1;
	int flag2=1;

	for(int i=0;i<k;i++){
	
		if(check[i]!=check[k-i-1]){
			flag1=0;
			break;
		}
	}
	
	int arr[1000];
	int nn=n;
	int a=0;
	while(nn){
		arr[a++]=nn%2;
		nn/=2;
	}
	



												
	int bin_n=n;
	int sum=0;
	while(bin_n){
		bin_n/=2;
		sum++;
	}
	for(int i=0;i<sum;i++){
		
		
		if(arr[i]!=arr[sum-1-i]){
			flag2=0;
			break;
		
		}
	
	}
	
	if(flag1&&flag2) return 1;
	else return 0;


}
int main(){
	int sum=0;
	for(int i=1;i<=1000000;i++){
	
	
		if(check_pal(i)&&(i%2!=0)) sum+=i;
		
	}
	printf("%d",sum);
	return 0;
}
