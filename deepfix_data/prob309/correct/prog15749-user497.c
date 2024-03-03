#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int i=0;
    char t[n];
    char ch;
    ch=getchar();
    for(i=0;i<n&&ch!=EOF;i++) {
        t[i]=ch;
        ch=getchar(); }
    return 0; }