#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
                if (n==0)
                return 1;
                else
                return (2*(2*n-1)*catalan(n-1))/n+1; }
int main(){
    int k,p,a[1000],i,check=0,j;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    scanf("%d",&a[i]);
    for(i=0;i<p;i++) {
        for(j=1;j<18;j++) {
            if(a[i]==catalan(j))
            check=1; }
        if(check==1)
        printf("yes");
        else
        printf("no"); }
    return 0; }