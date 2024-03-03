#include<stdio.h>
int fnctn(int a[i],n,l){
    int count=1;
    int t,j;
    t=a[i];
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
        for(l=i+1;l<n;l++){
            count=fnctn(a[i],n,l);
            if(count>max){
                max=count; } } }
    printf("%d",max);
    return 0; }