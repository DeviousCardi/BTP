#include<stdio.h>
double sum(double ar[],double n,double start){
    if(start==n-1){
        return ar[(int)start]; }
    else{
        return ar[(int)start]+sum(ar,n,start+1); } }
int main() {
    double n,s1,a[100000];
    scanf("%lf",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]); }
    s1=sum(a,n,0);
    printf("%d",(int)s1);
    return 0; }