#include<stdio.h>

long long jie_cheng(long long n){
	long long sum=1;
	for(int i=1;i<=n;i++){
		sum*=i;
		
	
	
	}
	return sum;

}
int main(){
	long long sum=0;
	long long num[100];
	long long k=0;
	for(int i=3;i<=2540160;i++){
		sum=0;
		long long temp=i;
		while(temp){
		
			sum+=jie_cheng(temp%10);	
			temp/=10;
			
		}
		printf("++%lld\n",sum);
		if(sum==i) num[k++]=sum;
	}
	long long ppp=0;
	for(int i=0;i<k;i++){
		ppp+=num[i];
		
	}
	printf("%lld\n",ppp);

}
