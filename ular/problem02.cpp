#include<bits/stdc++>
int main(){
	

	int a[3];
	a[0]=2;
	a[1]=3;
	a[2]=5;
	int i=0;
	int sum=0;
	while(1){
	
		
	a[i]=a[(i+1)%3]+a[(i+2)%3];
	if(a[i]>=4000000) break;
	if(a[i]%2==0) sum++;
	i++;
	
	}
	printf("%d\n",sum);
	
	return 0;
}
