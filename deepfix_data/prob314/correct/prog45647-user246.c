#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,c,j;
    scanf("%d",&n);
    char s[n];
    for(i=0;i<n;i++) {
        scanf("%c",&s[i]); }
    scanf("%d",&t);
    char q[t];
    for(i=0;i<t;i++) {
        scanf("%c",&q[i]); }
    for(i=0;i<t;i++) {
        if((s[q[i]]<s[q[i]-1])&&(s[q[i]]<s[q[i]+1]))
        printf("Yes");
       else
       printf("No"); }
	return 0; }