# include<stdio.h>
int diff_recur(int t[],int size,int count){
    static int c=0;
    if(count==size){
        return c; }
    if(count==0){
        c=t[count];
        return diff_recur(t,size,count+1); }
    else{
        c=c-t[count];
        return diff_recur(t,size,count+1); } }
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int r=diff_recur(arr,n,0);
    printf("%d",r);
    return 0; }