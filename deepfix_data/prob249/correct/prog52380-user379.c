#include <stdio.h>
int main() {
    int n,i,s, j,is;
    scanf("%d",&n);
    s=(n-1)/2;
    for(i=1;i<=s;i++)
       printf(" ");
    printf("*\n");
    is=0;
    for (i=1;i<=(n-1)/2;i++) {
        s=s-1;
        for(j=1; j<=s; j++)
          printf(" ");
        printf("*");
        for(j=1; j<=is; j++)
            printf(" ");
        is++;
        printf("*\n"); }
    s=1;
    is--;
    for(i=2; i<=(n-1)/2; i++) {
        for(j=1;j<=s;j++)
          printf(" ");
        s++;
      printf("*");
      is--;
      for(j=1;j<=is;j++)
        printf(" ");
    printf("*\n"); }
	return 0; }