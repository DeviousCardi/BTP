#include <stdio.h>
int main() {
    int n,i,x,sum1,sum2,temp;
    sum1=0;
    sum2=0;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        b[i]=0; }
    x=a[0];
    for(;;) {
        temp=a[x-1];
        b[temp]+=1;
        if(b[temp]==2) {
            for(i=0;i<n;i++) {
                sum1+=b[i]; }
            printf("%d ",sum1); }
        if(b[temp]==3) {
            for(i=0;i<n;i++) {
                sum2+=b[i];
                sum2-=sum1; }
            printf("%d",sum2);
            break; }
        print("\n%d ",temp)
        x=temp; }
    return 0; }