#include <stdio.h>
int maximum(int a,int b);
int minimum(int a,int b);
int main(){
    int max,min,n,i,a[20000],j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n-1;j++) {
            max=maximum(a[j],a[j+1]);
            min=minimum(a[j],a[j+1]);
            a[j]=min;
            a[j+1]=max; } }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }
int maximum(int a, int b) {
    if(a>b)
    return a;
    else
    return b; }
int minimum(int a, int b) {
    if(a>b)
    return b;
    else
    return a; }