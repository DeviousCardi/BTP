#include <stdio.h>
int main() {
    int a[15],b[15];
    int i,n1,n2,j;
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); {
            for(j=0;j<n2;j++)
            scanf("%d",&a[j]); }
        if (i==j)
        printf("YES");
        else
        printf("NO"); }
	return 0; }