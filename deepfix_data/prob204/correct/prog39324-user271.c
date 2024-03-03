#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,t;
    scanf("%d\n",&n);
    char A[n];
    for(i=0;i<n;i++)
    {A[i]=getchar();}
    t=0;
    for(j=0;j<n;j++)
    {   if(A[j]==A[n-1-j])
          {t++;} }
    if(t==n)
    printf("YES");
    else
    printf("NO");
	return 0; }