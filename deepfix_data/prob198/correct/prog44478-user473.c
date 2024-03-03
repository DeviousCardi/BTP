#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,i;
    scanf("%d\n",&n1);
    int a[n1];
    for(i=0;i<n1;i++) {
        scanf("%d\n",&a[i]); }
    int n2,j;
    scanf("%d\n",&n2);
    int b[n2];
    for(j=0;j<n2;j++) {
        scanf("%d\n",&b[n2]); }
        int p;
        p=a[0];
        for(i=1;i<n1;i++) {
            if(a[i]<p)
            p=a[i]; }
        printf("%d",p);
	return 0; }