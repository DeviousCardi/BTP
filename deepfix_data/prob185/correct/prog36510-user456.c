#include <stdio.h>
int c=0,b;
int sum(int n,int k,int a[n],int i,int j) {
    int m=0;
    for(b=i;b<j+1;b++)
    m+=a[b];
    if(m==k){
        c=1; }
    else if(j+1<n) return sum(n,k,a,i,j+1);
    else if(i+2<n) return sum(n,k,a,i+1,i+2);
    else return c; }
int main() {
    int n,k,l,x;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(l=0;l<n;l++)
    scanf("%d ",&a[l]);
    x=sum(n,k,a,0,1);
    if(x==1) printf("YES");
    else printf("NO");
    return 0; }