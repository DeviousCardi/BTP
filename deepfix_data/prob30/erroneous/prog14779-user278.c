#include <stdio.h>
int n,k,i,j,a,b,c;
int sz[];
int getMaxLessThan(int upperLimit) {
    for(j=0;j<n;j++)
    {   int max=0;
        if(sz[j]>max&&sz[j]<upperLimit) {
            max=sz[j]; } }
    return max; }
int main() {
    scanf("%d %d\n",&n,&k);
    int sz[n];
    for(i=0;i<n;i++) {
        scanf("%d",&sz[i]); }
    int m=0;
    for(a=0;a<n;a++) {
        if(sz[a]>m) {
            m=sz[a]; } }
    printf("%d\n",m);
    for(b=1;b<k;b++) {
       c=getMaxLessThan(m);
       printf("%d\n",c);
       m=c; }
    return 0; }