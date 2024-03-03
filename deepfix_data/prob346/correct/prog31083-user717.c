#include <stdio.h>
int main() {
    int i=0,con=0;
    int n,k,j;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]); }
    int min=ar[0];
    int p=0;
    while(p<n) {
             for(k=0;k<n;k++) {
        if(ar[k]<=min)
        min=ar[k]; }
        for(k=0;k<n;k++) {
            if(ar[k]==min) {
            con++; } }
        for(j=0;j<con;j++) {
            printf("%d ",min); }
        con=0;
        p++;
        min=ar[p]; }
    printf("end");
    return 0; }