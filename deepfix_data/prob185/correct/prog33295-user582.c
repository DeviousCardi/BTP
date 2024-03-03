#include <stdio.h>
int rec(int l,int sum,int a[l-1]) {
    if(sum<0||l<0)
    return 0;
    else if (sum==0)
    return 1;
    return (rec(l-1,sum-a[l],a[l-1])||rec(l-1,sum,a[l-1])); }
int main() {
    int m,s;
    scanf("%d%d",&m,&s);
    int a[m];
    for (int i=0;i<m;i++)
    scanf("%d",&a[i]);
    int r = rec(m,s, a[m]);
    if (r==1)
    printf("YES");
    else
    printf("NO");
    return 0; }