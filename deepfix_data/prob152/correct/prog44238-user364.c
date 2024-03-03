#include <stdio.h>
int cal=0;
int comb(int a[],int n,int ind,int s1,int s2) {
    if(ind==n) {
        if(s1==s2) {
            cal++;
            return 1; }
        else {
          return 0; } }
    return comb(a,n,ind+1,s1+a[ind],s2)||comb(a,n,ind+1,s1,s2+a[ind]); }
int main() {
    int n,x;
    int a[40],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    x=comb(a,n,0,0,0);
    if(x==1)
    printf("YES");
    else
    printf("NO");
    printf("%d",cal);
    return 0; }