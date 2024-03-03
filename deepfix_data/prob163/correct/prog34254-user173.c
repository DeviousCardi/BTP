#include<stdio.h>
int main() {
    int n1,n2;
    char temp;
    int i;
    int a[500],b[500];
    scanf("%d\n%d\n",&n1,&n2);
    for(i=1;i<=n1;i++) {
        scanf("%c\n",&temp);
        a[n1-i]=temp-'0'; }
    for(i=1;i<=n2;i++) {
        scanf("%c\n",&temp);
        b[n2-i]=temp-'0'; }
    for(i=n1-1;i>=0;i--)
        printf("%d",a[i]);
    for(i=n2-1;i>=0;i--)
        printf("%d",b[i]);
    return 0; }