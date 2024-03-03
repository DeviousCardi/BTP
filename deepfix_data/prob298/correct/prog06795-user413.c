#include <stdio.h>
#include <stdlib.h>
long catalan(int n) {
    if(n<=1)
    return 1;
    else
    return (float)((4*n-2)*catalan(n-1))/(n+1); }
int main() {
    int i,j,t,a[100],count[100];
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<t;i++) {
        count[i]=0; }
    for(i=1;i<=17;i++) {
        for(j=0;j<t;j++) {
            if(a[j]==catalan(i))
            count[j]++; } }
    for(j=0;j<t;j++) {
        if(count[j]==0)
        printf("no\n");
        else
        printf("yes\n"); }
	return 0; }