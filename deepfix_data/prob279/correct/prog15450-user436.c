#include <stdio.h>
int main() {
    int p=0;
    int sum=0;
    int f,k,l,r;
    int i,n,j,m;
    scanf("%d",&n);
int s[n];
    for(i=0;i<n;i++) {
        scanf("%d",&s[i]); }
    for(f=1;f<=n;f++) {
        for(j=0;j<n;j=j+1) {
            if(s[j]==f) {
                sum=sum+1; }
        }if(sum==2) {
            k=f;
            break; } }
    for(l=1;l<=n;l++) {
        for(m=0;m<n;m=m+1) {
            if (s[m]==l) {
                p=p+1;
                continue; } }
        if(p==0){
            r=l;
            break;} }
        if(sum==2) {
            printf("%d\n",k); }
        if(p==0){
        printf("%d",r);}
    return 0; }