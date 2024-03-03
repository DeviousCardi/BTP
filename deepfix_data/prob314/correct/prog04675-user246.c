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
    for(i=0;i<n;i++) {
        if((q[s[i]]<q[s[i]-1])&&(q[s[i]]<q[s[i]+1]))
        printf("Yes\n");
       else
       printf("No\n"); }
	return 0; }