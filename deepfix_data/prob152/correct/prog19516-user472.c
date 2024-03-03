#include <stdio.h>
 int check(int A[],int n,int index,int sum_A,int sum_B) {
        if(index==n)
        return sum_A==sum_B;
        return check(A,n,index+1,sum_A+A[index],sum_B)|| check(A,n,index+1,sum_A,sum_B+A[index]); }
int main()
{int A[]={1,2,10,4};
int ans=check(A,4,0,0,0);
printf("%d",ans);
    return 0; }