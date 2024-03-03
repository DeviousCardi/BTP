#include <stdio.h>
int main() {
    int n,i,j,d,e;
    scanf("%d",&n);
    d=1;e=1;
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]; }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[j]==a[i]) {
                printf("YES");
                d=0;e=0;break; } }
        if(e==0)
        break; }
    if(d==1)
    printf("NO");
	return 0; }