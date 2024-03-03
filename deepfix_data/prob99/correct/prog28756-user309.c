#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x[n];
    int i,j,count=0,g,max[n];
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]); }
    for(i=0;i<n;i++) {
        count=0;
        for(j=i+1;j<n;j++) {
            if(x[i]<x[j])  count++; }
        max[i]=count; }
    g=max[0];
    for(i=1;i<n;i++) {
        if(max[i]>g)  g=max[i]; }
    printf("%d",g);
    return 0; }