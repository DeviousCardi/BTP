#include <stdio.h>
int main() {
    int n,i,s, is;
    scanf("%d",&n);
    s=(n-1)/2;
    for(i=1;i<=s;i++)
       printf(" ");
    printf("*\n");
    is=0;
    for (i=1;i<=(n-1)/2;i++) {
        s=s-1;
        for(i=1; i<=s; i++)
          printf(" ");
        printf("*");
        for(i=1; i<=is; i++)
            printf(" ");
        is++;
        printf("*\n"); }
	return 0; }