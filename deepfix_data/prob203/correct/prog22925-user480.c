#include <stdio.h>
int main() {
    int n,i,a[50],j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n&&j!=i;j++) {
            if(a[i]==a[j]) {
                printf("YES\n");
                break; }
            else {
                c++; } } }
    if(c==n)
    {printf("NO\n");}
	return 0; }