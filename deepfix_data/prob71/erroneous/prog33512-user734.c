#include <stdio.h>
int main() {
    int i,j,N,temp,b=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
    while(b==0) {
        b=1;
        for(j=0;j<N-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; } }
        for(i=0;i<N-1;i++)
            if(arr[i]>arr[i+1]) {
                b=0;
                break; } }
    if((N%2)!=0)
    printf("%d",arr[N/2]);
    else {
        float x = (arr[N/2]+arr[N/2-1])/2.0
        printf("%.1f",x); }
    return 0; }