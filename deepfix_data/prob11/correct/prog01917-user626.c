#include <stdio.h>
int s,n,r=0;
int help(int index,int a[], int sum) {
    if(index==n) {
        if(s==sum)
        r=1;
        else
        r=0; }
    return help(index+1,a,sum+a[index])||help(index+1,a,sum); }
int main() {
    scanf("%d %d", &n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(help(0,a,0)==1)
    printf("%s", "YES");
    return 0; }