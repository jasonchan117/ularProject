#include<stdio.h>
int cont[5000002];

int main(){
	int max=-1;
	for(int i=0;i<=5000000; i++) {
		cont[i]=0;
		
	}
	for(int i=1;i < 1000000;i++){
		long long temp=i;
		long long  count=0;
		int flag=0;
		
		while(temp!=1){
            
            if(temp<=5000000){
                if(cont[temp]){
					flag=1;
					cont[i]=count+cont[temp];
                    break;
			    }	
			}
			if(temp % 2==0) {
			            
				temp/=2;
			}
			else{
				temp=(3*temp+1);
			}
			count++;
		}
		if(flag==0){
			cont[i]=count;
		}
	}
    int su;
	for(int i=1;i<=1000000;i++){	
		if(cont[i]>=max){
			max=cont[i];
			su=i;
		}
    }
	printf("%d\n",su);
	return 0;
}
