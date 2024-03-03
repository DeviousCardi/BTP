#include <stdio.h>
#include <stdlib.h>
int cate(int n) {
    if(n==0)
    return 1;
    else
    return (cate(n-1)*2*(cate(2*n-1))/(n+1));
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&k);
            for(j=0;j<17;j++) {
              if(k==cate(j)) {
                   printf("yes\n");
                   break; }
                if(k<cate(j)) {
                 printf("no\n");
                 break; }
               if(k>cate(j))
               continue; } }
	return 0; }