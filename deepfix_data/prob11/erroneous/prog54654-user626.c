#include <stdio.h>
int s,n;
void help(int index,int a[n], int sum) {
    if(index==n) {
        if(s==sum)
        printf("%s","YES");
        else
        printf("%s","NO"); }
    help(index+1,a[n],sum+a[index])||help(index+1,a[],sum);
    return; }
int main() {
    scanf("%d %d", &n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    help(0,a,0);
    return 0; }