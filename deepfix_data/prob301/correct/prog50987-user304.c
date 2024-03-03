#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,c,t=0;
    scanf("%d\n",&n);
    char s[n];
    scanf("%s",s);
    char mode;
    for(j=0;j<n;j++) {
    for(i=0,c=0;i<n;i++) {
        if(s[j]==s[i])
        c++; }
        if(c>=t)
        mode = s[j]; }
    printf("%c",mode);
	return 0; }