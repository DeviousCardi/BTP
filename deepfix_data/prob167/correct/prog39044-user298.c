#include<stdio.h>
int sum(int add[],int N) {
    int P=0;
    P=P+(sum(add,N-1)); }
int main() {
    int N,i;
    scanf("%d\n",&N);
    int arr[N],add=0;
    for(i=0;i<N;i++) {
        scanf("%d ",&arr[i]); }
    add=sum(arr,N);
    return 0; }