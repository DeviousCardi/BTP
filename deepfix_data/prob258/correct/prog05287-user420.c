#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,s[n],i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
      scanf("%d\n",&s[i]); }
    i=0;
    if(s[i]>s[i+1])
    printf("Yes\n");
    for(i=1;i<n-1;i++) {
        if(s[i-1]<s[i]&&s[i]>s[i+1]) {
        printf("Yes\n");
        break; } }
        if(i==n-1&&s[i]>s[i-1]) {
        printf("Yes\n"); }
        else
        printf("No\n");
	return 0; }