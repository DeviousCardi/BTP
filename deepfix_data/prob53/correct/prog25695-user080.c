#include<stdio.h>
int sum=0;
int diff(int a[],int start,int end) {
    if(end==0){return a[start];}
   else if(start==end){return sum;}
    else {
        sum=a[start]-a[start+1];
        a[start+1]=sum;
         diff(a,start+1,end); } }
int main() {
    int n,a[1000000],i,s;
    scanf("%d",&n);
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a[i]); }
    s=diff(a,0,n);
    printf("%d",s);
    return 0; }