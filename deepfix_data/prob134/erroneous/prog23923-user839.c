#include <stdio.h>
#include <stdlib.h>
int fact(int a) {
        if (a==1)
        return 1;
        else {
            return(a*fact(a-1)); } }
int bin(int a,int b) {
        if(n<k) return 0;
        else if(k==0&&n==0) return 1;
        else if(k=0) return 1;
        else {
                return (fact(a)/(fact(b)*fact(a-b))); } }
int main() {
    int b,n,k;
    scanf("%d",&b);
    for (n=0;n<=20;n++) {
            for(k=0;k<=20;k++) {
                    if(bin(n,k)==b)
                        printf("%d %d",n,k);
                    else
                        printf("-1"); } }
	return 0; }