#include <stdio.h>
int main() {
    int n,A[10000],A1[100],count;
    scanf("%d",&n);
    for(int i=0;i<100;i++)
    A1[i]=1;
    for(int i=0;i<n;i++) {
        scanf("%d",&A[i]); }
    for(int i=0;i<100;i++) {
        count=0;
        for(int k=0;k<n;k++) {
            if(A1[i]==A[k])
            count++; }
        while(count!=0) {
            printf("%d ",A1[i]);
            count--; } }
    printf("end");
    return 0; }