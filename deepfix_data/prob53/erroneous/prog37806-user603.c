#include<stdio.h>
int difference(int arr[],int N)
{   int t=arr[0]
    static int diff=t,i=0;
    if(N==1) {
        return diff; }
    diff=diff-arr[i+1];
    i++; }
int main() {
    int N;
    scanf("%d",&N);
    int num[N];
    for(int i=0;i<N;i++)
    scanf("%d",&num[i]);
    printf("%d",difference(num,N));
    return 0; }