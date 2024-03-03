#include <stdio.h>
#include <stdlib.h>
int fact(int a) {
        if (a==1)
        return 1;
        else {
            return(a*fact(a-1)); } }
int bin(int a,int b) {
        if(a<b) return 0;
        else if(a==0&&b==0) return 1;
        else if(b==0) return 1;
        else {
                return (bin(a-1,b)+bin(a-1,b-1)); } }
int main() {
    int b,n,k;
    scanf("%d",&b);
    for (n=0;n<=20;n++) {
            for(k=0;k<=n;k++) {
                    if(bin(n,k)==b)
                        {                                                              printf("%d %d",n,k);
                             return 0; } } }
    printf("-1");
	return 0; }