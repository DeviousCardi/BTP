#include <stdio.h>
int main() {
    int i,j,n,count;
    scanf ("%d\n",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]); }
    for (i=0;i<n;i++) {
        for (j=i;j<n;j++) {
            if (a[j]==a[i]) {
                count=count+1; } } }
    if (count>0)
    printf ("YES");
    else
    printf ("NO");
	return 0; }