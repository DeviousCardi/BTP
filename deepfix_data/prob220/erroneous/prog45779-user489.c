#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m;
	scanf("%d",&h);
    for(i=1;i<h;i++) {
        j=((2*h)-1-(i-1));
        if(h%2==0) {
            j=j/2;
            for(l=1;l<=j;l++) {
                printf(" "); }
            printf("*");
            if(i==1) {
                j=((2*h)-1-(i-1));
                j=j/2;
            for(l=1;l<=j;l++) {
                printf(" "); } }
            else {
                printf("*");
                for(m=1;m<i;m++) {
                    printf(" "); }
                printf("*");
                j=((2*h)-1-(i-1));
                j=j/2;
            for(l=1;l<=j;l++) {
                printf(" "); } } }
	return 0; }