#include<stdio.h>
int diff(int ar[],int n);
int diff(int ar[],int n) {
    int c=0;
    int x=ar[0]-ar[1];
    ar[1]=x;
    n--;c++;
    printf("%d %d\n",n,x);
    if(n>1)
    diff(++ar,n);
    else
    return ar[c]; }
int main() {
    int N;
    scanf("%d\n",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    scanf("%d ",&arr[i]);
    int DI=diff(arr,N);
    printf("\n%d",DI);
    return 0; }