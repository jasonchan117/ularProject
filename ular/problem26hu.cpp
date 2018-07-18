/*************************************************************************
	> File Name: problem26hu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 14时25分15秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>//問題的性質和鏈表性質一樣，只能想唯一方向發展
using namespace std;
inline int get_next(int n,int d){
    return (n*10)%d;
}
int get_circle_length(int d){
    int ar=1;
    int br=1;
    do{//兩個指針，一個指針的速度位1,一個指針的速度位2.
        ar=get_next(ar,d);
        br=get_next(br,d);
        br=get_next(br,d);
    }while(br!=0&&ar!=br);
    if(br==0) return 0;
    int len=0;
    do{//當兩個指針第一次相遇後，讓第一個指針不動，第二個指針再走一圈的長度就是循環解的長度
        br=get_next(br,d);
        len++;
    }while(ar!=br);
    return len;
}
int main(){
    int ans_num;
    int max_length=0;
    for(int i=2;i<=999;i++){
        if(get_circle_length(i)>max_length){
            ans_num=i;
            max_length=get_circle_length(i);               
        }
    } 
    printf("%d\n",ans_num);
    return 0;
}


//如何求循環的起點，兩個指針一個指針的速度是另一個指針的速度的兩倍，當第一個指針入環的時候，第二個指針在環中已經走了一個柄的距離了，應爲第二個指針相對於第一個指針打速度唯一，也就是
//每次追1,就必須走環長-柄長的距離才能和第一個指針相遇，所以相遇點就是環長-柄長
