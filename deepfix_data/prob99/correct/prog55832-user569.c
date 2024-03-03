#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int A[n];
    int i,j;
    for(i=0;i<n;i++) {
        scanf("%d",&A[i]); }
    int seek,lsub=0,tmp;
    for(i=0;i<n;i++) {
        tmp=1;
        seek=A[i];
        for(j=i;j<n;j++) {
            if(A[j]>=seek) {
                tmp++;
                seek=A[j]; } }
        if(lsub<tmp) {lsub=tmp;} }
    printf("%d",lsub); }