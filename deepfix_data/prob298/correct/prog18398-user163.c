#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int k;
    if(n==0)
    return 1;
    else
    k=(int)2*catalan(n-1)*((float)(2*n-1))/(n+1);
    return k; }
int main() {
    int t,i,a[20],k[20],j,match;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&a[i]); }
    for(i=0;i<18;i++) {
        k[i]=catalan(i); }
    for(i=0;i<t;i++) {
        for(j=0;j<18;j++) {
            match=0;
            if(a[i]==catalan(j))
           {match=1;
            break;} }
    if(match==1)
        printf("yes\n");
    else
    printf("no\n"); }
	return 0; }