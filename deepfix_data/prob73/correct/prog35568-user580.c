#include <stdio.h>
int main() {
    int a[100][100],t[100],n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]); }
    for(int i=0;i<n;i++) {
        int s=0;
        for(int j=0;j<m;j++)
        s=s+a[i][j];
        t[i]=s; }
    int max=0;
    for(int i=0;i<n;i++)
    if(t[i]>max)
    max=t[i];
    printf("%d",max);
    return 0; }