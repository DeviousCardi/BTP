#include <stdio.h>
#include <stdlib.h>
int main() {
	          int N,S,i,j;
	          scanf("%d\n",&N);
	          int a[N];
	          for(i=0;i<N;i++)
	           {scanf("%d\n",&a[i]); }
              scanf("%d\n",&S);
              for(i=0;i<N-1;i++)
               {for(j=0;j<N;j++)
                 { if(a[i]+a[j]==S)
                   printf("(%d,%d\n)",a[i],a[j]); } }
	return 0; }