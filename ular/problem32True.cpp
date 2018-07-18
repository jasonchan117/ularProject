/*************************************************************************
	> File Name: problem32True.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月23日 星期一 20时15分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int mm[11];
    int book[11]={0};
    for(int i=1;i<=9;i++){
        book[i]=1;
        for(int j=1;j<=9&&!book[j];j++){
            book[j]=1;
            for(int k=1;k<=9&&!book[k];k++){
                book[k]=1;
                for(int y=1;y<=9&&!book[y];y++){
                    book[y]=1;
                    for(int x=1;x<=9&&!book[x];x++){
                        book[x]=1;
                        for(int n=1;n<=9&&!book[n];n++){
                            book[n]=1;
                            for(int m=1;m<=9&&!book[m];m++){
                                book[m]=1;
                                for(int l=1;l<=9&&!book[l];l++){
                                    book[l]=1;
                                    for(int p=1;p<=9&&!book[p];p++){
                                                             
                                        mm[1]=i;
                                        mm[2]=j;
                                        mm[3]=k;
                                        mm[4]=y;
                                        mm[5]=x;
                                        mm[6]=n;
                                        mm[7]=m;
                                        mm[8]=l;
                                        mm[9]=p;
                                        
                                        int ans=mm[6]*1000+mm[7]*100+mm[8]*10+mm[9];
                                        int a=mm[1]*1000+mm[2]*100+mm[3];
                                        int =mm[4]*10+mm[5]*100;
                                        int num

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
