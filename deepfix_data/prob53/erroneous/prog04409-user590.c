#include<stdio.h>
int diff(int ar[],int n);
int diff(int ar[],int n) {
    int x=ar[0]-ar[1];
    ar[1]=x;
    n--;
    if(n>1)
    diff(++ar,n);
    else
    return ar[n-1]; }
int main() {
    int N;
    scanf("%d\n",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    scanf("%d ",&arr[i]);
    int DIFF=diff(arr[],N);
    printf("\n%d",DIFF);
    return 0; }