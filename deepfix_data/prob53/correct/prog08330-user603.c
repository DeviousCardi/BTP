#include<stdio.h>
int difference(int arr[],int N,int diff) {
    static int i=0;
    if(N==1) {
        return diff; }
    diff=diff-arr[i+1];
    i++;
    difference(arr,N-1,diff); }
int main() {
    int N;
    scanf("%d",&N);
    int num[N];
    for(int i=0;i<N;i++)
    scanf("%d",&num[i]);
    int s=num[0];
    printf("%d",difference(num,N,s));
    return 0; }