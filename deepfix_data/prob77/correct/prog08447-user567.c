#include <stdio.h>
int main() {
    int n,l,i,j,max=0,min=0,ch=0;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++) {
        scanf("%d",&p[i]); }
    for(j=0;j<(n-1);j++) {
        if(p[j]<p[j+1])
        {max=j+1;}
        else if(p[j]>p[j+1])
        {min=j+1;} }
    ch=p[max];
    p[max]=p[min];
    p[min]=ch;
    for(l=0;l<n;l++) {
        printf("%d ",p[l]);
    }}