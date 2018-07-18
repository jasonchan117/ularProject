#include<stdio.h>
int direct[4][2]={
	{0,1},
	{1,0},
	{1,1},
	{-1,1}
};

int matrix[30][30];
int main(){
	
	for(int i=0;i<20;i++){
	
		for(int j=0;j<20;j++){
		
			scanf("%d",&matrix[i][j]);
		}
	}
	int max=-1;
	int sum=1;
	int zero=0;
	for(int i=0;i<20;i++){
	       	for(int j=0;j<20;j++){
			for(int k=0;k<4;k++){
				sum=matrix[i][j];
				int mm=3;
				int tempX=i;
				int tempY=j;
				while(mm--&&tempX>=0&&tempX<20&&tempY>=0&&tempY<20){
					tempX+=direct[k][0];
					tempY+=direct[k][1];
					sum*=matrix[tempX][tempY];
					
				}
                if(sum>=max) max=sum;
			}
		
			//if(sum>=max) max=sum;
		}

	}
	printf("%d",max);
	return 0;
}
