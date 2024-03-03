#include <stdio.h>
int main() {
    int n; int x;
    scanf("%d\n",&n);
    printf("%d\n",n);
    int a[n];
    int i;
    int c=0;
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    int p;
    scanf("%d\n",&p);
    int b[p];
    int j;
    for(j=0;j<p;j++) {
        scanf("%d ",&b[p]); }
    for(int z=0;z<p;z++)
        printf("%d\n",b[z]);
    for(i=0;i<n;i++) {
        if(a[i]==b[0]) {
            x=i;
            c=1;
            break; } }
    for(j=0;j<p;j++) {
        if(a[x+j]==b[j])
        c=1; }
    if (c==1)
    printf("YES\n");
    else
    printf("NO\n");
	return 0; }