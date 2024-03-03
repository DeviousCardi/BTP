#include <stdio.h>
int main() {
    int n;
    int i,j,k,t;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",ar[i]); }
    int max=ar[0];
    int min=ar[0];
    for(i=0;i<n;i++) {
        if(ar[i]>=max) {
        max=ar[i];
        j=i; }
        else if(ar[i]<=min) {
            min=ar[i];
            k=i; } }
    t=ar[j];
    ar[j]=ar[k];
    ar[k]=t;
    for(i=0;i<n;i++) {
        printf("%d ",ar[i]); }
    printf("end");
    return 0; }