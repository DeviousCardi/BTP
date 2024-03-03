#include <stdio.h>
int main() {
    int a,max,min,m,n;
    scanf("%d",&a);
    int s[a];
    if(a>=2&&a<=1000) {
        for(int i=0;i<a;i++) {
            scanf("%d",&s[i]);
            if(s[i]>s[i-1]) {
                max=s[i];
                m=i;
                min=s[i-1];
                n=i-1; }
            else if(s[i]<s[i-1]) {
                max=s[i-1];
                m=i-1;
                min=s[i];
                n=i; } }
    s[m]=min;
    s[n]=max;
    for(int j=0;j<a;j++)
    printf("%d",s[j]); }
    printf("end");
    return 0; }