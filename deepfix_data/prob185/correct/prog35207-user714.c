#include <stdio.h>
int verify(long int arr[],int n,long int s,int start){
    int i,diff;
    if(start==n-1){
        if(arr[start]==s)
            return 1;
        else
            return 0; }
    diff=s-arr[start];
    if(diff==0)
        return 1;
    if(diff<0)
        return (arr,n,s,start+1);
    if(diff>0){
        for(i=start+1;i<n;i++){
            if(arr[i]==diff)
                return 1;
        arr[start]=diff;
        return (arr,n,s,start+1)+(arr,n,s,start); } } }
int main() {
    long int s;
    int n,i,a;
    scanf("%d %ld",&n,&s);
    long int arr[n];
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]); }
    a=verify(arr,n,s,0);
    if(a!=0)
        printf("YES");
    else
        printf("NO");
    return 0; }