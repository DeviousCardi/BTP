#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i,j,t;
       scanf("%d\n",&n);
       char ch[20];
     for (i=0;i<n;i=i+1) {
        scanf("%c\n",&ch[i]); }
        scanf("%d\n",&t);
     for (i=0;i<t;i=i+1) {
        scanf("%d\n",&j);
     if(ch[j]>ch[j+1] && ch[j]>ch[j-1])
        {printf("Yes\n"); }
     else
         {printf("NO\n"); } }
	return 0; }