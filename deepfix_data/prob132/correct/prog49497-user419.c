#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n],count[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        count[i]=0; }
    for(i=0;i<n;i++) {
        for(j=0;j<a[i];j++) {
          count[i]++; } }
    for(i=0;i<n;i++) {
       printf("%d ",count[i]); }
       if(a[i]==count[i]){
            printf("yes"); }
        else{
            printf("No"); }
    return 0; }