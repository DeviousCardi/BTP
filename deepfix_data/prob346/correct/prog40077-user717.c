#include <stdio.h>
int main() {
    int i=0,con=0;
    int n,k,j;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]); }
    for(i=0;i<n;i++) {
        for(k=0;k<n;k++) {
            if(ar[k]<=ar[i])
            con++; }
        for(j=0;j<con;j++) {
            printf("%d ",ar[i]); }
        ar[i]=100; }
    printf("end");
    return 0; }