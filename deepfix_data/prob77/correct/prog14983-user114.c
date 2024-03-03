#include <stdio.h>
int max(int a, int b) {
    if (a>b) return a;
    else return b; }
int min(int a,int b) {
    if(a<b) return a;
    else return b; }
int main()
{int n ,k,h;
scanf("%d",&n);
int s[n];
for(int i=0;i<n;i++)
    { int g;
        scanf("%d",&g);
        s[i]=g; }
    int ma =s[0];
    int mi =s[0];
for(int j=0;j<n;j++) {
        int ma=max(ma,s[j]);
        int mi=min(mi,s[j]); }
for(int k=0;k<n ;k++) {
        if(ma==s[k]) break; }
for(int h=0;h<n;h++) {
        if(mi==s[h]) break; }
    int temp =s[k];
    s[k]=s[h];
    s[h]=temp;
for (int d=0;d<n;d++) {
        printf("%d ",s[d]); }
    printf("end");
    return 0; }