#include <stdio.h>
int main() {
    int i,j,n,a[50];
    scanf("%d\n",&n);
    scanf("%d",&a[0]);
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]);
        for(j=0;j<i;j++) {
            if(a[i]==a[j]) {
                printf("YES");
            return 0;} } }
    printf("NO");
	return 0; }