#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() { int n,m,x,y,*s,*w,i;
             scanf("%d ",n);
             scanf("%d ",m);
             scanf("%d ",x);
             scanf("%d\n",y);
            s=(int*)malloc(n*sizeof(int));
            w=(int*)malloc(m*sizeof(int));
            for(i=0;i<n;i++){
                scanf("%d",*(s+i)); }
            scanf("%d\n")
            for(i=0;i<m;i++){
                scanf("%d",*(w+i)); }
            printf("%d %d" ,*s, *(w+2));
	return 0; }