#include <stdio.h>
int main() {
    int n;
    int s[100];
    int d;
    int i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        if(n-d+i<n)
        s[i]=s[n-d+i];
        else
        s[i]=s[i-n+d]; }
    for (i=0;i<n;i++)
    printf("%d ",s[i]);
    return 0; }