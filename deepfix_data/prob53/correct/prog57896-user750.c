#include<stdio.h>
static int c=0;
int diff_recur(int t[],int size,int count){
    if(count==size){
        return c; }
    else{
        if(count==0){
            c=t[count];
            return  diff_recur(t,size,count+1); }
        else{
            c=c-t[count];
            return diff_recur(t,size,count+1); } } }
int main()
{   int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int c=diff_recur(arr,n,0);
    printf("%d",c);
    return 0; }