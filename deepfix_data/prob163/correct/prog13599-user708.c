#include <stdio.h>
#include <stdlib.h>
char a1[503], b1[503];
static int a[503], b[503], sum[503], i, n1, n2, carr, t;
int main() {
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    printf("D");
    for(i=0;i<n1;i++)
        scanf("%c",&a1[i]);
        scanf("%s\n",b1);
    for(i=0;i<n1;i++)
        a[502-i+n1]=a1[i]-48;
    for(i=0;i<n2;i++)
        b[502-i+n2]=b1[i]-48;
    for(i=502;i>=0;i++) {
        t=a[i]+b[i]+carr;
        sum[i]=t%10;
        carr=t/10; }
    for(i=0;sum[i]==0;i++);
    for(;i<503;i++)
        printf("%d",sum[i]);
	return 0; }