#include <stdio.h>
int main() {
    int flag=0,i,j,n,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++) {
        for(j=0;j<i;j++)
        if(a[j]==a[i])
        flag=1; }
    if(flag==1)
    printf("YES");
    else printf("NO");
	return 0; }