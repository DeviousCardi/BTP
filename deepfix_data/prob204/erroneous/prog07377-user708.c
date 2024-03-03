#include <stdio.h>
#include <stdlib.h>
char a[100000];
int n=0;
int chk() {
    for(i=0;i<(n/2);i++)
	    if(a[i]!=a[n-1-i])
	        retrun 0;
	return 1; }
int main() {
    scanf("%s",&a);
    for(n=0;a[n]!='\0';n++);
    if(chk())
	    printf("YES");
	else
	    printf("NO");
	return 0; }