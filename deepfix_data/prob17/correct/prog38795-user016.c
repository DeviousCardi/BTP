#include <stdio.h>
int main() {
    int n,m,a[20],b[20],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&m);
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]); }
    i=0;
    while(a[i]!=b[i])
    i++;
    for(j=i;j<m+i;j++) {
        if(a[i]!=b[i])
        break; }
    if(j<m+i)
    printf("NO");
    else printf("YES");
	return 0; }