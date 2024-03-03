#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,s[n],i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
      scanf("%d\n",&s[i]); }
    i=0;
    if(s[i]<s[i+1])
    printf("Yes");
    for(i=1;i<n-1;i++) {
        if(s[i-1]<s[i]&&s[i]>s[i+1]) {
        printf("Yes");
        break; } }
        if(i==n-1&&s[i]>s[i-1]) {
        printf("Yes"); }
        else
        printf("No"); i
	return 0; }