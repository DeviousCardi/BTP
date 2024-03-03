#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int i=0;
    char t[n];
    char ch;
    ch=getchar();
    for(i=0;i<n&&ch!=eof;i++) {
        t[i]=ch;
        ch=getchar(); }
        printf("%c",t[0]);
    return 0; }