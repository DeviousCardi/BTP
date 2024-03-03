#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,c,j;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++) {
        scanf("%d",&s[i]); }
    scanf("%d",&t);
    int q[t];
    for(i=0;i<t;i++) {
        scanf("%d",&q[i]); }
    for(i=0;i<t;i++) {
        if((s[q[i]]<s[q[i]-1])&&(s[q[i]]<s[q[i]+1]))
        printf("Yes");
       else
       printf("No"); }
	return 0; }