# include<stdio.h>
long int diff_recur(long int t[],int size,int count){
    static long int c=0;
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
    long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]); }
    long int r=diff_recur(arr,n,0);
    printf("%ld",r);
    return 0; }