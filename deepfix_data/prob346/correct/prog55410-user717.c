#include <stdio.h>
int main() {
    int i,con=0;
    int n,k,j;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]); }
    int min=ar[0];
   while(i<n) {
        for(k=0;k<n;k++) {
        if(ar[i]<=min)
        con++; }
    for(j=0;j<con;j++) {
       printf("%d ",ar[i]); }
    ar[i]=100;
    i++; }
    printf("end");
    return 0; }