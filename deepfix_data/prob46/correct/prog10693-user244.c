#include <stdio.h>
int main(){
    int m,n,f,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++) {
        f=0;
        while(n%i==0) {
         f=1;
         n=n/i; }
        if(f==1) {
            c++;
            f=0; } }
    printf("%d",c);
        return 0; }