#include <stdio.h>
int main() {
    int n,d,i,j,sum=0,a[30];
    scanf("%d ",&n);
    scanf("%d\n",&d);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    if(n>=d) {
        for(i=0;i<(d+1);i++)
        {printf("%d\n",a[i]);
            sum=sum+a[i]; }
        printf("%d",sum); }
	return 0; }