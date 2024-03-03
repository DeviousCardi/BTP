#include <stdio.h>
int main() {
    int check(int A[],int size,int index,int sum_A,int sum_B) {
        if(index==size)
        return sumA==sumB;
        return check(A,n,index+1,sum_A+A[index],sum_B)|| check(A,n,index+1,sum_A,sum_B+A[index]); }
    return 0; }
int A[]={1,2,3,4};
int ans=check(A,4,0,0,0);
printf("%d",ans);