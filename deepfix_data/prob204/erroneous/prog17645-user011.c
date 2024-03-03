#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,rem,reverse=0;
    scanf("%d",&n);
    int copy=n;
    while(copy!=0) {
        rem=copy%10;
        revrse=reverse+rem*10;
        copy=copy/10; }
    if(reverse==n)
    {printf("YES/n");}
    else {
        printf("NO\n"); }
	return 0; }