#include <stdio.h>
int search(int arr[],int num,int start,int end){
if(start==num||end==num) return 1;
if(arr[start]+arr[end]==num) return 1;
if(start>end) return 0;
if(arr[start]+arr[end]<num) return search(arr,num,start+1,end);
if(arr[start]+arr[end]>num) return search(arr,num,start-1,end); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int trans[n];
    for(int i=0;i<n;i++)
    scanf("%d",&trans[i]);
    if(search(trans,s,0,n-1)==1)
    printf("YES");
    else printf("NO");
    return 0; }