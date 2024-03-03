#include <stdio.h>
int main() {
    int n,c=0;
    scanf("%d\n",&n);
    while(n>0) {
        c=c+(n%10);
        n=n/10; }
    if(2016%c!=0) printf("%d\n",2016+c-(2016%c));
    else printf("2016");
    return 0; }