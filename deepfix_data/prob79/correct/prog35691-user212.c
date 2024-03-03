#include <stdio.h>
#include <stdlib.h>
int main() { int n,i;
            int *p;
            scanf("%d",&n);
            p=(int*)malloc(n*sizeof(int));
            for(i=0;i<n;i++){
                scanf("%d",p+i); }
             printf("%d",p[1]);
	return 0; }