#include <stdio.h>
int main() {
    int p=0;
    int sum=0;
    char f,k,l,r;
    int i,n,j'm';
    scanf("%d",&n);
    char s[n];
    for(i=0;i<2*n;i++) {
        scanf("%ch",&s[i]);
        if((i%2!=0)&&s[i]!="") {
            return 0; } }
    for(f=1;f<=n;f++) {
        for(j=0;j<2*n;j=j+2) {
            if(s[j]==f) {
                sum=sum+1; }
        }if(sum==2) {
            k=f;
            break; } }
    for(l==1;l<=n;l++) {
        for(m=0;m<2*n;m=m+2) {
            if (s[m]==l) {
                p=p+1;
                continue; } }
        if(p==0){
            r=l;
            break;} }
        if(sum==2) {
            printf("%ch\n",'k'); }
        if(p==0){
        printf("%ch",'l');}
    return 0; }