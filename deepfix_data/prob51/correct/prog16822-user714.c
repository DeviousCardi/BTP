#include <stdio.h>
void sort(int a[],int start,int end,int k){
    int i,max;
    int b[end+1];
    if(start==end)
        return;
    max=a[start];
    for(i=start+1;i<=end;i++){
        if(a[i]>max){
            max=a[i];
            break; } }
    b[start]=max;
    if(start==k-1){
        printf("%d",b[start]);
        return; }
    sort(a,start+1,end,k); }
int main() {
   int n,k,i;
   scanf("%d %d",&n,&k);
   int arr[n];
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]); }
   sort(arr,0,n-1,k);
    return 0; }