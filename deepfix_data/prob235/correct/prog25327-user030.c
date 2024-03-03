#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,l,m;
    scanf("%d",&h);
    for(i=1;i<=(h+1)/2;i++) {
        for(j=1;j<=(h/2)+(1-i);j++) {
            printf(" "); }
        for(k=((h+1)/2)-i+1;k<=(h+1)/2+i-1;k++) {
            printf("%d",k%10); }
        printf("\n"); }
    for(i=((h+1)/2)+1;i<=h;i++) {
        for(l=1;l<=i-((h+1)/2);l++) {
            printf(" "); }
        for(m=((h+1)/2)+i-h;m<=((h+1)/2)-i+h;m++) {
            printf("%d",m%10); }
        printf("\n"); }
	return 0; }