#include <stdio.h>
void sort(long int,long int[]);
int main() {
    long int n,i,j;
    scanf("%ld",&n);
    long int rank[n];
    double bid[n],a,b;
    for(i=0;i<n;i++) {
        scanf("%lf",&bid[i]); }
    for(i=0;i<n;i++) {
        rank[i]=0;
        for(j=0;j<n;j++) {
            if(bid[i]<bid[j]) {
                rank[i]++; } } }
    if(n%2==0) {
        for(i=0;i<n;i++) {
            if(rank[i]==n/2)
            a=bid[i];
            if(rank[i]==(n-1)/2)
            b=bid[i]; }
        printf("%.1lf",(a+b)/2); }
    if(n%2!=0) {
        for(i=0;i<n;i++) {
            if(rank[i]==n/2){
            printf("%.0lf",bid[i]);
            break; } } }
    return 0; }