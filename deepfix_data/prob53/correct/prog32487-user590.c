#include<stdio.h>
int diff(int ar[],int n);
int diff(int ar[],int n) {
    int x=ar[0]-ar[1];
    ar[1]=x;
    n--;
    if(n>1) {
    int a=diff(++ar,n);
    return a; }
    else
    return x; }
int main() {
    int N;
    scanf("%d\n",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    scanf("%d ",&arr[i]);
    int DI=diff(arr,N);
    printf("\n%d",DI);
    return 0; }