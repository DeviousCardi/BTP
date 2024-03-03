#include <stdio.h>
void swap( int arr[],int a,int b) {
    int temp;
    temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp; }
int check(int arr[30],int s,int start ,int n) {
    if(s >=0 ) {
        if( s ==  0) {
            return 1; }
        else
            return check(arr,s-arr[start],start+1,n); }
    return 0; }
void permute(int arr[],int start ,int n) {
    int i;
    if(start == n-1) {
        for(i=0;i<n;i++)
            printf("%d",arr[i]);
        printf("\n");
        return; }
    for(i=start;i<n;i++) {
        swap(arr,start,i);
        permute(arr,start+1,n);
        swap(arr,start,i); } }
int main() {
    int n;
    long int s;
    scanf("%d %ld",&n,&s);
    int arr[30];
    for(int i=0 ; i<n;i++)
        scanf("%d",&arr[i]);
    permute(arr,0,n); }