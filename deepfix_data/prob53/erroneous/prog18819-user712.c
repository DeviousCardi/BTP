#include<stdio.h>
void diff(long int a[],long int start,long int end) {
    if(start==end)
    return;
    else {
        a[start+1] = a[start]-a[start+1];
        diff(a,start+1,end)
        return; } }
int main() {
    long int i,N
    scanf("%d",&N);
    long int ar[N+1];
    for(i=0;i<N;i++)
    scanf("%d",&ar[i]);
    diff(ar,0,N-1);
    printf("%d",ar[N-1]);
    return 0; }