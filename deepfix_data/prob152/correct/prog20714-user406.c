#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    int rsum,lsum;
    int flag;
    for(i=0;i<n;i++) {
        rsum=0;
        lsum=0;
        for(j=i;j<n;j++)
            rsum=rsum+a[j];
        for(j=0;j<i;j++)
            lsum=lsum+a[j];
         printf("%d %d\n",rsum,lsum);
        if(rsum==lsum) {
            printf("YES");
            flag=1;
            break; }
        else {
            flag=0; } }
    if(flag==0) {
        printf("NO"); }
    return 0; }