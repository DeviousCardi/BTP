#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int k,i,j,m;
    scanf("%d",&n);
    j=1;
    char a='*',b='x';
    if(n%2==0) {
            char temp;
            temp=a;
            a=b;
            b=temp; }
    for(k=1;k<=n+1;k++) {
        for(i=1;i<=n-j+1;i++) {
        printf(" "); }
        for(m=1;m<=j;m++) {
            if(m%2==0)
                printf(a);
            else
                printf(b); }
        printf("\n");
        j++; }
    j=n;
    for(k=n+2;k<=2*n+1;k++) {
        for(i=1;i<=n-j+1;i++) {
            printf(" "); }
            for(m=1;m<=j;m++) {
            if(m%2==0)
            printf(a);
            else
            printf(b); }
        printf("\n");
        j--; }
	return 0; }