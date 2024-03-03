#include <stdio.h>
#include <stdlib.h>
int TOH(int i) {
    if (i==0)
    return 0;
    else
    if (i==1)
    return 1;
    else
 return 2*TOH(i-1)+1;
    printf("TOH is %d", TOH); }
int main() {
    int i,t,a[t],p;
    scanf ("%d\n",&t);
    for (i=0;i<t;i++) {
        scanf("%d",a[i]);
        p=TOH(a[i]);
        printf("%d",p); }
	return 0; }