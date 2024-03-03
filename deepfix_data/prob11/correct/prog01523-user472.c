#include <stdio.h>
int S;
int check(int A[],int size,int index,double sum_a,double sum_b) {
    if(index==size)
    return sum_a==S ||sum_b==S;
    else return check(A,size,index+1,sum_a+A[index],sum_b)||check(A,size,index+1,sum_a,sum_b+A[index]); }
int main() {
    int N;
    scanf("%d %d",&N,&S);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d ",&A[i]); }
    int ans=check(A,N,0,0,0);
    if(ans==1)
    printf("YES");
    else
    printf("NO");
    return 0; }