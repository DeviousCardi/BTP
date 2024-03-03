#include<stdio.h>
int sum(a[],int size)
if(size==0)
return a[0];
return (a[size-1]+sum(a,size-1));
int main() {
    int N,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    int final;
    final = sum(a,N);
    printf("%d",final);
    return 0; }