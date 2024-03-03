#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i=-1;int sum=0;
    if(n==0)
       return 0;
       else
       return sum+catalan(++i)*catalan(n-1-(++i)) }
int main() {
    int i,t,small,n;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        for(i=0;i<n;i++) {
            h=catalan(i);
            if(h<=n)
            small=h;
            else
            break; }
        printf("%d\n",small); }
	return 0; }