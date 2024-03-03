#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++) {
        scanf("%d",&s[i]); }
    scanf("%d",&t);
    int q[t];
    for(i=0;i<t;i++) {
        scanf("%d",&q[i]); }
    for(i=0;i<t;i++)
    {if(q[i]==0) {
         if(s[q[i]]<s[q[i]+1])
        { printf("Yes\n");
          continue; }
       else
       { printf("No\n");
         continue; } }
      else
        if(q[i]!=n)
        {  if((s[q[i]]<s[q[i]-1])&&(s[q[i]]<s[q[i]+1]))
           printf("Yes\n");
           else
           printf("No\n"); }
        else if(s[q[i]]<s[q[i]-1])
        printf("No\n");
           else
           printf("Yes\n"); }
	return 0; }