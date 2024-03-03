#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i,j,t;
       scanf("%d",&n);
       int ch[20];
     for (i=0;i<n;i=i+1) {
        scanf("%d",&ch[i]); }
        scanf("%d",&t);
     for (i=0;i<t;i=i+1) {
        scanf("%d",&j);
     if (j==n-1) {
         if(ch[j]<ch[j-1])
           {printf("Yes\n"); }
         else
           {printf("No\n"); } }
      else if(j==0) {
         if(ch[j]<ch[j+1])
           {printf("Yes\n"); }
         else
           {printf("No\n"); } }
    else if(ch[j]<ch[j+1] && ch[j]<ch[j-1])
      {printf("Yes\n"); }
     else
         {printf("No\n"); } }
	return 0; }