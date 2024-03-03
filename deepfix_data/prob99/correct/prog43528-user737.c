#include<stdio.h>
int main() {
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    int max[N];
    max[0]=arr[0];
    for(i=1;i<N;i++) {
        max[i]=max[i-1];
        if(arr[i]>=max[i]) {
            max[i]=arr[i]; } }
    for(i=0;i<N;i++) {
        printf("%d ",max[i]); }
    return 0; }