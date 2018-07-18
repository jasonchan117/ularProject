#include<stdio.h>
int a[100000001];
int main(){
for(int i=0;i<=100000000;i++) a[i]=0;
for(int i=2;i<=100000000;i++){
	if(!a[i]){
		a[++a[0]]=i;
	}
	for(int j=1;j<=a[0]&&(i*a[j]<=100000000);j++){
	
		a[i*a[j]]=1;
		if(i%a[j]==0) break;
	}

}
printf("%d\n",a[20000]);
return 0;
}
