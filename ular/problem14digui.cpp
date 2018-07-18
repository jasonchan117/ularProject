/*************************************************************************
	> File Name: problem14digui.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月22日 星期日 16时02分15秒
 ************************************************************************/

#include<iostream>
#include<inttypes.h>
#define MAX 1000000
#define MAX_KEEP 5000000
using namespace std;
int keep[5000002]={0};
int get_chain_len(int64_t n){
    if(n==1) return 1;
    if(n<=MAX_KEEP&&keep[n]){
        return keep[n];


    }   
    int ans=0;
    
    if(n%2==0){

        ans=get_chain_len(n/2)+1;
    } 
    else ans= get_chain_len(3*n+1)+1;

    if(n<MAX_KEEP){

        keep[n]=ans;
    }

    return ans;

}
int main(){
    int ans=0;
    int ans_len=0;
    for(int i=1;i<MAX;i++){
        int tmp_len=get_chain_len(i);
        //ans_len=ans_len>tmp_len ?ans_len :tmp_len;
        if(tmp_len>ans_len){

            ans_len=tmp_len;
            ans=i;

        }
    }
    printf("%d\n",ans);

}
