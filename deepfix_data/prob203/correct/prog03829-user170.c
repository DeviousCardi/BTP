#include <stdio.h>
int main() {
    int d=0,n,i,j;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                d=1;
                break; } }
        if(d==1)
        break; }
    if(d==1)
    printf("YES");
    else
    printf("NO");
	return 0; }