#include <stdio.h>
#include <stdlib.h>
  long catalan(int n) {
    int i;
    long prod=1;
    if(n<=1)
    prod=1;
    else
    for(i=2;i<=n;i++) {
        prod=prod*(float)(n+i)/i;
        printf("%d\n",prod); }
    return prod; }
int main() {
    int i,j,t,a[100],count[100];
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<t;i++) {
        count[i]=0; }
    for(i=0;i<17;i++) {
        for(j=0;j<t;j++)
        { printf("%ld\n",catalan(i));
            if(a[j]==catalan(i)){
            count[j]++; } } }
    for(j=0;j<t;j++) {
        if(count[j]==0)
        printf("no\n");
        else
        printf("yes\n"); }
	return 0; }