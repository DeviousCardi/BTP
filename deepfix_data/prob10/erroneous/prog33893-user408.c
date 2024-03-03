#include<stdio.h>
int max(int,int);
int main() {
    int a[200],Maxtill[200],i;j,n,l;
    scanf("%d"&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            if(a[j]<a[i])
               Maxtill[i]=max(max(1+Maxtill[j]),1);
            else
               Maxtill[i]=1; } }
    l=Maxtill[0];
    for(i=0;i<n,i++) {
        if(l<Maxtill[i])
          l=Maxtill[i]; }
    printf("%d"l;)
    return 0; }
int max(int a,int b) {
        if(a>b)
          return a;
        else
          return b; }