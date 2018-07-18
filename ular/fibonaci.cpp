#include<stdio.h>
int main(){
	

	long long a[3];
	a[0]=1;
	a[1]=1;
	a[2]=2;
	int i=0;
	int count =3;
	long long sum=0;
	while(1){
	
	
	
		a[i%3]=a[(i+1)%3]+a[(i+2)%3];	
		sum=a[i%3];
		i++;
		count++;
		if(count==58) break;
	}
	
	printf("%lld",sum);
	return 0;

}
