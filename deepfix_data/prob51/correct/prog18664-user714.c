#include <stdio.h>
void sort(int a[],int start,int end,int k){
    int i,max;
    int b[end+1];
    if(start==k+1){
        printf("%d",b[k]);
        return; }
    max=a[start];
    for(i=start+1;i<=end;i++){
        if(a[i]>max)
            max=a[i]; }
    b[start]=max;
    sort(a,start+1,end,k); }
int main() {
   int n,k;
   scanf("%d %d",&n,&k);
   int arr[n];
   sort(arr,0,n-1,k);
    return 0; }