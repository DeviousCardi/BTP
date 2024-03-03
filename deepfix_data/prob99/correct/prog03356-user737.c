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
            max[i]=arr[i]; }
        printf("%d ",max[i]); }
    int count=0;
    for(i=0;i<N-1;i++) {
        if(max[i]!=max[i+1])
        count++; }
    count++;
    printf("\n%d",count);
    return 0; }