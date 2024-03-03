#include <stdio.h>
int find(int a[],int sum1,int s,int i, int size) {
    if(i==size+1)
        return 0;
    if(sum1==s) {
        return 1; }
    return find(a,sum1+a[i],s,i+1,size)||find(a,sum1,s,i+1,size); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if(find(a,0,s,0,n))
        printf("YES");
    else
        printf("NO");
    return 0; }