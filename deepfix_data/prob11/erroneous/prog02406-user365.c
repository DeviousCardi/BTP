#include <stdio.h>
int search(int arr[],int num,int start,int end){
if(start==num||end==num) return 1;
if(start+end==num) return 1;
if(start>end) return 0;
if(start+sum<num) return search(arr,num,start+1,end);
if(start+sum>num) return search(arr,num,start-1,end); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int trans[n];
    for(int i=0;i<n;i++)
    scanf("%d",&trans[i]);
    printf("%d",search(trans,s,0,n-1));
    return 0; }