#include<stdio.h>
int diff_recur(int t[],int size,int count){
    if(count==0){
        return -t[count]; }
    return -t[count]-diff_recur(t,size,count-1); }
int main()
{   int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int c=diff_recur(arr,n,n);
    printf("%d",c);
    return 0; }