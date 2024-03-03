#include <stdio.h>
#include <stdlib.h>
int main() {
int	cat(int n) {
        int i,res=0;;
        for(i=0;i<n;i++) {
              res=res+cat(i)*cat(n-i-1); }
          return res; }
int n,i,j,flag;
scanf("%d",&n);
int k[n];
for(i=0;i<n;i++)
    {flag=0;
        scanf("%d",&k[i]);
        for(j=0;j<17;j++) {
              if(cat(j)==k[i]) {
                  flag=1;break; } }
          if(flag==1)
           printf("yes\n");
           else printf("no\n"); }
	return 0; }
	return 0; }