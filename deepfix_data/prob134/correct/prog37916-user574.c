#include <stdio.h>
#include <stdlib.h>
int binomial(int n, int k) {
    if(n<k)
        return 0;
    else if((n==0)&&(k==0))
        return 1;
    else if(k==0)
        return 1;
    else
        return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
    int i,j,b,flag=0;
    scanf("%d",&b);
    for(i=0;i<=20;++i) {
            for(j=0;j<=i/2;++j) {
                    if(binomial(i,j)==b) {
                            printf("%d %d",i,j);
                            flag=1;
                            break; } } }
    if(flag==0)
        printf("%d",flag-1);
	return 0; }