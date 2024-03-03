#include <stdio.h>
#include <stdlib.h>
int chk(char a[50]){
    int len;
    for(len=0;a[len];len++);
    int c=0,l=len-1;
    while(c<=l){
        if(a[c++]!=a[l--])
        return 0; }
    return 1; }
int main() {
    char a[50]
	scanf("%s",a);
	if(chk(a)) printf("YES\n");
	else        printf("NO\n");
	return 0; }