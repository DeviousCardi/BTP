#include<stdio.h>
int sum=0;
int flag=0;
int fun(int n,int a[],int halfsum,int start, sum){
    if (halfsum==sum){
        flag =1; }
     if (start<=n){
 return fun(n,a,halfsum,start+1,sum+a[start])||fun(n,a,halfsum,start+1,sum);}
    return flag; }
int main (){
    int i,n,tsum=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
        flag=fun(n,a,k,0,sum);
    if (flag==1){
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }