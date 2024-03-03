#include <stdio.h>
#include <stdlib.h>
long fact(int n) {
    if(n==0)
    return 1;
    else
    return n*fact(n-1); }
long catalan(int n) {
    if(n==0)
    return 1;
    else
    return fact(2*n)/(fact(n+1)*fact(n)); }
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
            count[j]++;
                printf("%d\n",count[j]); } } }
    for(j=0;j<t;j++) {
        if(count[j]==0)
        printf("no\n");
        else
        printf("yes\n"); }
	return 0; }