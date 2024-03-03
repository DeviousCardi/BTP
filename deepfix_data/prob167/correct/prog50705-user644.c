#include<stdio.h>
int sum=0,N,ctr=0;
int main() {
    int add(int *m);
    scanf("%d",&N);
    int arr[N],i,*m=arr;
    for(i=0;i<N;i++)scanf("%d",&arr[i]);
    int s=add(m);
    printf("%d",s);
    return 0; }
int add(int *x) {
    if(ctr==N)
    return 0;
    sum=sum+*x+add(x++);
    ctr++;
    return sum; }