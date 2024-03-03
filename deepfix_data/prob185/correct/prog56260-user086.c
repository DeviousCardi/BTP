#include <stdio.h>
void sum(int a[],int n,int start,int s)
{if(n==0) {
    printf("NO");
    return; }
    if(s==a[start]) {
        printf("YES");
        exit(0);
        return; }
    s=s-a[start];
    for(int i=start+1;i<n-1;i++) {
        sum(a,n-1,start+i,s); } }
int main() {
    int n,s,a[30],i;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        int temp=a[i];
        a[i]=a[0];
        a[0]=temp;
        sum(a,n,0,s);
        temp=a[i];
        a[i]=a[0];
        a[0]=temp; }
    return 0; }