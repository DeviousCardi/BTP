#include <stdio.h>
int main() {
    int i,N,arr[1000];
    long int p;
    scanf("%d\n",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]); }
    arr[N]=0;
    p=pro(arr,N);
    printf("%ld",p); }
 int pro(int arr[],int N){
    long int count=1;
    count=count*arr[N];
    if(N==1)
    return count;
    else
    return
    pro(arr,N-1); }