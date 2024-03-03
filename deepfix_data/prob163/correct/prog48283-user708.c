#include <stdio.h>
#include <string.h>
int main() {
    char temp1[505], temp2[505];
    int a[505], b[505], sum[505], n1, n2, t, carr=0, i;
    scanf("%d",&n1);
    scanf("%d",&n2);
    getchar();
    gets(temp1);
    gets(temp2);
    for(i=0;i<n1;i++) {
        a[505+i-n1]=temp1[i]-48; }
    for(i=0;i<n2;i++) {
        b[505+i-n2]=temp2[i]-48; }
    for(i=504;i>=0;i--) {
        t=a[i]+b[i]+carr;
        sum[i]=t%10;
        carr=t/10; }
    for(i=0;sum[i]==0;i++);
    if(i==504)
        printf("0");
    else
        for(;i<505;i++)
            printf("%d",sum[i]);
    return 0; }