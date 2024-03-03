#include<stdio.h>
#include<strings.h>
reverse_print(long int arr[],long int start,long int  end) {
    long int i,temp;
    if(start>=end){
    return 0;}
    else {
        temp=0;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        return reverse_print(arr,start+1,end-1); } }
int main() {
    long int N,i;
    scanf("%ld",&N);
    printf("%ld",N);
    long int arr[N];
    for(i=0;i<N;i++) {
        scanf("%ld",&arr[i]); }
    reverse_print(arr,0,N);
    return 0; }