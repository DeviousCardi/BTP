#include <stdio.h>
int comb(int a[],int n,int ind,int s1,int s2) {
    if(ind==n) {
        if(s1==s2) {
            printf("YES");
            return 0; }
        else {
          printf("NO");
          return 0; } }
    return comb(a,n,ind+1,s1+a[ind],s2)||comb(a,n,ind+1,s1,s2+a[ind]); }
int main() {
    int n;
    int a[40],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    comb(a,n,0,0,0);
    return 0; }