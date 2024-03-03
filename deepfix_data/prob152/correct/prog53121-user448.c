#include<stdio.h>
int sum=0;
int flag=0;
int fun(int n,int a[],int halfsum,int start,int sum){
    if (halfsum==sum){
        flag =1; }
     if (start<=n){
 return fun(n,a,halfsum,start+1,sum+a[start])||fun(n,a,halfsum,start+1,sum);}
    return flag; }
int main (){
    int i,n,tsum=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        tsum=tsum+a[i]; }
    if (tsum%2!=0){
        flag=0; }
    else {
        flag=fun(n,a,tsum/2,0,0); }
    if (flag==1){
        printf("yes"); }
    else {
        printf("No"); }
    return 0; }