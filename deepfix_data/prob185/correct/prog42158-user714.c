#include <stdio.h>
static int count=0;
int verify(long int arr[],int n,long int s,int start){
    int i;
    if(start==n-1)
        return 0;
    for(i=start+1;i<n;i++){
        if((arr[start]+arr[i])==s)
            count++; }
    return (count+ verify(arr,n,s,start+1)); }
int main() {
    long int s;
    int n,i;
    scanf("%d %ld",&n,&s);
    long int arr[n];
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]); }
    printf("%d",count+1);
    verify(arr,n,s,0);
    return 0; }