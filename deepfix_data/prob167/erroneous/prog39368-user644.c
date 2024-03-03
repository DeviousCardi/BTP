#include<stdio.h>
int sum=0,N,ctr=0;
int main() {
    int add(int *);
    scanf("%d",&N);
    int arr[N],i,*m=&arr[0];
    for(i=0;i<N;i++)scanf("%d",&arr[i]);
    printf("%d",add(m,));
    return 0; }
int add(int *x) {
    x=m;
    if(ctr==N)
    ctr++;
    return 0;
    sum+=add(++m);
    ctr++;
    return sum; }