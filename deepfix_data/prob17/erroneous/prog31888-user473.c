#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    int i;
    int c=0;
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    int p;
    scanf("\n%d\n",&p);
    int b[p];
    int j;
    for(j=0;j<p;j++) {
        scanf("%d ",&b[p]); }
    for(i=0;i<n;i++) {
        if(a[i]==b[0]) {
            int x;
            x=i;
            c=1; }
        if(c==1)
        break; }
    for(j=0;j<b;j++) {
        if(a[x+j]==b[j])
        c=1; }
    if (c==1)
    printf("YES\n");
    else
    printf("NO\n");
	return 0; }