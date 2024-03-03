#include <stdio.h>
void sort(long int,long int[]);
int main() {
    long int n,i,j;
    scanf("%ld",&n);
    long int rank[n];
    double bid[n],a,b,sorted[n];
    for(i=0;i<n;i++) {
        scanf("%lf",&bid[i]);
        sorted[i]=-1; }
    for(i=0;i<n;i++) {
        rank[i]=0;
        for(j=0;j<n;j++) {
            if(bid[i]<bid[j]) {
                rank[i]++; } }
        sorted[rank[i]]=bid[i]; }
    for(i=0;i<n;i++) {
        if(sorted[i]==-1) {
            for(j=i;sorted[j]==-1&&j>=0;j--) { }
            sorted[i]=sorted[j]; } }
    if(n%2==0) {
        printf("%.1lf",(sorted[n/2]+sorted[(n/2)-1])/2); }
    if(n%2!=0) {
        printf("%.0lf",sorted[n/2]); }
    return 0; }