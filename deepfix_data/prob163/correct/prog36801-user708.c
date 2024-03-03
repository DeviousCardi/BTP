#include <stdio.h>
#include <stdlib.h>
static char a1[503], b1[503];
static int a[503], b[503], sum[503], i, n1, n2, carr, t;
int main() {
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    printf("D");
    for(i=0;i<n1;i++)
        scanf("%c",&a1[i]);
    for(i=0;i<n1;i++)
        printf("%c",a1[i]);
        getchar();
    for(i=0;i<n1;i++)
        a[502-i+n1]=a1[i]-48;
    for(i=0;i<n2;i++)
        b[502-i+n2]=b1[i]-48;
    for(i=502;i>=0;i++) {
        t=a[i]+b[i]+carr;
        sum[i]=t%10;
        carr=t/10; }
    for(i=0;sum[i]==0;i++);
	return 0; }