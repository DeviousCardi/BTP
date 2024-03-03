#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,c,t=0;
    scanf("%d",&n);
    int a[n];
    char s[n];
    scanf("%s",s);
    int mode;
    for(j=0;j<n;j++) {
    for(i=0,c=0;i<n;i++) {
        if(a[j]==a[i])
        c++; }
        if(c>=t)
        mode = a[j]; }
    printf("%d",mode);
	return 0; }