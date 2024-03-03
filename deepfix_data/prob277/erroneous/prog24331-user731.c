#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int p,l;
    p=(n/2)+1;
    l=(n/2);
    for(int i=1;i<=p;i++) {
        for(int k=1;k<i;k++) {
            printf(" "); }
        for(int j=n;j>=(2*i-1);j--) {
            printf("*"); }
        printf("\n"); }
    for(int x=1;x<=l;x++) {
        for(int y=l;y>x;y--) {
            printf(" "); }
        for(int z=1;z<=(2*i+1);z++) {
            printf("*"); } }
	return 0; }