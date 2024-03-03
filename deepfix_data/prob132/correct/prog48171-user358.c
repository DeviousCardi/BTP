#include <stdio.h>
int main() {
    int n,m=0,c=0,x=0;
    scanf("%d ",&n);
    char a[n],str[2*n];
    scanf("%s",str);
    for(int i=0;i<n;i++) {
        a[i]=str[c];
        c=c+2; }
    c=0;
    for(int i=0;i<n;i++) {
        c=0;
        m=a[i];
        for(int j=0;j<n;j++)
        if(m==a[j])
        c++;
        printf("%d ",c);
        if(c==m)
        x++;
        printf("%d ",x); }
    if(x==n)
    printf("Yes");
    else
    printf("No");
    return 0; }