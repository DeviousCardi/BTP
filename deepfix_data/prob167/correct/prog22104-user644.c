#include<stdio.h>
long int sum=0;int N,ctr=0;
int arr[100000];
int main() {
    int add(int x);
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++)scanf("%d",&arr[i]);
    printf("%d",add(0));
    return 0; }
int add(int x) {
    if(ctr==N)
    return 0;
    ctr++;
    sum+=arr[x];
    add(x+1);
    return sum; }