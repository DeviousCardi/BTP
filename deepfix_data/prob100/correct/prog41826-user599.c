#include<stdio.h>
#include<limits.h>
int main() {
    int a[1000],i,j,m,n,max_row[100],final,period=0;
    scanf("%d%d\n",&m,&n);
    for(i=0;i<n*m;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=period;j<period+m-1;j++) {
            if(a[j]<a[j+1])
                max_row[i]=a[j+1];
            else
                max_row[i]=a[j]; }
        period=period+m; }
    for(i=0;i<=n;i++) {
        if(max_row[i]<max_row[i+1])
            final=max_row[i+1];
        else
            final=max_row[i]; }
    printf("%d",final);
    return 0; }