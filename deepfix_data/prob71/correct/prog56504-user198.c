#include <stdio.h>
int n;
void kd(int s[],int i) {
    int j,k,p;
    for(j=0;j<i;j++) {
        for(k=j;k<i;k++)
        if(s[j]>s[k]) {
            p=s[j];
            s[j]=s[k];
            s[k]=p; } }
     if(i==n) {
         if(n%2!=0) {
             printf("%d",s[n/2]); }
         else {
         printf("%.1f",(float)(s[n/2]+s[n/2-1])/2.0); }
         return; }
    kd(s,i+1); }
int main() {
    int s[100000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    kd(s,0);
    return 0; }