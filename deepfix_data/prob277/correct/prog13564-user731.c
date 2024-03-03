#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int p,l;
    p=(n/2)+1;
    l=(n/2);
    int i,j,k,x,y,z;
    for(i=1;i<=p;i++) {
        for(k=1;k<i;k++) {
            printf(" "); }
        for(j=n;j>=(2*i-1);j--) {
            printf("*"); }
        printf("\n"); }
    for(x=1;x<=l;x++) {
        for(y=l;y>x;y--) {
            printf(" "); }
        for(z=1;z<=(2*x+1);z++) {
            printf("*"); }
        printf("\n"); }
	return 0; }