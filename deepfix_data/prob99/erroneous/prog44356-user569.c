#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int A[n];
    int i,j;
    for(i=0;i<n;i++) {
        scanf("%d",&A[i]); }
    int blood,seeker,lsub=0,tmp2=0;
    for(i=0;i<n;i++) {
        tmp1=0;
        seeker=A[i];
        blood =A[n-i]
        for(j=i;j<n;j++) {
            if(A[j]>=seeker) {
                tmp1++;
                seeker=A[j]; } }
        for(j=n-i;j>=0;j--) {
            if(A[j]<=blood) {
                tmp2++;
                blood=A[j]; } }
        if(lsub<tmp1) {lsub=tmp1;}
        if(lsub<tmp2) {lsub=tmp2;} }
    printf("%d",lsub); }