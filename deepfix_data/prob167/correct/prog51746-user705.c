#include<stdio.h>
double sum(double ar[],int n,int start){
    if(start==n-1){
        return ar[start]; }
    else{
        return ar[start]+sum(ar,n,start+1); } }
int main() {
    int n;
    double s1,a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]); }
    s1=sum(a,n,0);
    printf("%d",(int)s1);
    return 0; }