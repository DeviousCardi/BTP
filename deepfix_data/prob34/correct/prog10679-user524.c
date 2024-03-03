#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,index,t;
     char a[20];
    scanf("%d\n",&n);
    for (i=0; i < n; i= i+1) {
        scanf("%c\n",&a[i]); }
         scanf("%d\n",&t);
    for(i=0;i<t;i++) {
    scanf("%d\n",&index);
    if(-32768<=a[index]&&32767>=a[index])
        printf("Yes\n");
    else
        printf("No\n"); }
	return 0; }