#include <stdio.h>
int main() {
    int n,d,i,j,b,c,k;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]); }
    scanf("%d",&d);
    if(d==0) {
    for(i=0;i<n;i++) {
        printf("%d ",array[i]); } }
    else {
    for(j=0;j<d;j++)
    {   k=array[0];
        b=k;
        for(i=0;i<n-1;i++) {
            c=array[i+1];
            array[i+1]=b;
            b=c; }
        array[0]=c; }
    for(i=0;i<n;i++) {
        printf("%d ",array[i]); } }
    return 0; }