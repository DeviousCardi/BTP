#include <stdio.h>
int main(){
    int n,i=0,j,temp,count=0;
    scanf ("%d\n",&n);
    if (n>=2 && n<=100) {
       int a[i];
       for (i=1;i<=n;i++) {
           scanf("%d",&a[i]); }
       for (i=1;i<=n;i++) {
            for (j=1;j<=n;j++) {
                if (a[i]==a[j]) {
                    temp=j;
                    count=(j-i); } } } }
        printf("%d %d",temp,count); }
    return 0;