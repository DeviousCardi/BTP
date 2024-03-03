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
        scanf("%d",&q[i]); } {
        if(s[q[0]]<s[q[1]])
       printf("Yes\n");
       else
       printf("No\n"); }
    for(i=1;i<t-1;i++) {
        if((s[q[i]]<s[q[i]-1])&&(s[q[i]]<s[q[i]+1]))
        printf("Yes\n");
       else
       printf("No\n"); } {
        if(s[q[t]]<s[q[t-1]])
       printf("Yes\n");
       else
       printf("No\n"); }
	return 0; }