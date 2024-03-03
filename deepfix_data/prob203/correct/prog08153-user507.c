#include <stdio.h>
int main() {
    int i,j,n,count=0;
    scanf ("%d\n",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]); }
    for (i=0;i<n;i++) {
        for (j=i;j<n;j++) {
            if (a[j]==a[i]) {
                count=count+1; } } }
    if (count==n)
    printf ("NO");
    else if(count>n)
    printf ("YES");
	return 0; }