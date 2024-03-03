#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[50], i, j, max=0, count, N, k;
    scanf("%d", &N);
    for(i=0; i<N; i++)
     scanf("%d", &a[i]);
    for(i=0; i<N; i++)
    { count=0;
      for(k=i; k<N; k++)
      { if(a[i]==a[k])
        { count++; } }
      if(count>=max)
      { max=count;
        j=a[i]; } }
    printf("%d",j);
	return 0; }