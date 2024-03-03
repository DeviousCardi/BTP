#include<stdio.h>
int sum(int arr[],int n){
    int s=0;
    if(n<0){ arr[n]=0;
        return s;}
s+=arr[n-1]+arr[n-2];
return (arr,n-2); }
int main() {
    int N,a[100000],m,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d ",&a[i]); }
    m=sum(a,N);
    printf("%d",m);
    return 0; }