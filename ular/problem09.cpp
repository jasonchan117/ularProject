#include<stdio.h>
int main(){
	int i,j;
	int k;
	for(i=1;i<=1000;i++){
	
		for(j=1;j<=1000;j++){
			for(k=1;k<=1000;k++){
				if((i*i+j*j==k*k)&&(i+j+k==1000)){
				
					break;
				
				}
			
			}
			
		
		}
	
	}
	printf("%d %d %d",i,j,k);
	return 0;
	
}
