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
    if ((a[index])<(a[index]+1))
        printf("Yes\n");
    else
    printf("No\n");
    if ((a[index])<=(a[index]+1))
        printf("Yes\n");
    else
    printf("No\n");
    if((a[index]-1)<=a[index]&&(a[index]+1)>=a[index])
        printf("Yes\n");
    else
        printf("No\n"); }
	return 0; }