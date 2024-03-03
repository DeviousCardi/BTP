#include <stdio.h>
int main() {
    int i=0,con=0;
    int n,k,j;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]); }
    int min=ar[0];
    for(i=0;i<n;i++) {
        for(k=0;k<n;k++) {
        if(ar[i]<=min)
        min=ar[i]; }
        for(k=0;k<n;k++) {
            if(ar[k]==min) {
              con++;
            ar[k]=100; } }
        for(j=0;j<con;j++) {
            printf("%d ",min);
            ar[i]=100; }
        min=ar[i+1]; }
    printf("end");
    return 0; }