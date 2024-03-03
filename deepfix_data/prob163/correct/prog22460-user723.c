#include <stdio.h>
#include <stdlib.h>
int main() {
    long long n1,n2;
    int t=0;
    int d1,d2,i,l;
    int s[501];
    int a[501];
    int b[501];
    scanf("%d\n",&d1);
    scanf("%d\n",&d2);
    scanf("%lld\n",&n1);
    scanf("%lld\n",&n2);
    for(i=0;i<501;i++){
        if(i<d1){
            a[i]=n1%10;
            n1=n1/10; }
        else a[i]=0; }
    for(i=0;i<501;i++){
         if(i<d2){
            b[i]=n2%10;
            n2=n2/10; }
        else b[i]=0; }
    for(i=0;i<501;i++){
        s[i]=(a[i]+b[i])%10+t;
         t=(a[i]+b[i])/10; }
    for(i=501;i>0;i--){
        if(s[i]!=0)
            break; }
    for(l=i;l>=0;l--){
        printf("%d",s[l]); }
    return 0; }