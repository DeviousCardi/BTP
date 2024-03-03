#include<stdio.h>
int diff_recur(int t[],int size,int count){
    int c;
    if(count==size){
        return 0; }
    if(count==0)
        c=t[count];
    else
        c=c-t[count];
    return c-deff_recur(t,sixe,count+1); }
int main()
{   int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int c=diff_recur(arr,n,0);
    printf("%d",c);
    return 0; }