#include<stdio.h>
int fnctn(int m,int n,int l,int a[]){
    int count=1;
    int t,j;
    t=m;
    for(j=l;j<n;j++){
        if(t<a[j]){
            count++;
            t=a[j]; } }
    return count; }
int main() {
    int n,l;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int count,max=0;
    for(i=0;i<n;i++){
        int m=a[i];
        for(l=i+1;l<n;l++){
            count=fnctn(m,n,l,a);
            if(count>max){
                max=count; } } }
    printf("%d",max);
    return 0; }