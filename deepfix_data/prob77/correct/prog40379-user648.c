#include <stdio.h>
int main() {
    int a,max,min,m,n;
    scanf("%d",&a);
    int s[a];
    if(a>=2&&a<=1000) {
        for(int i=0;i<a;i++) {
            scanf("%d",&s[i]);
            for(int j=0;j<=i;j++) {
                if(s[i]>s[j]) {
                    max=s[i];
                    m=i; }
                else if(s[i]<s[j]) {
                    min=s[i];
                    n=i; } } }
        s[m]=min;
        s[n]=max;
        for(int k=0;k<a;k++)
        printf("%d ",s[k]); }
    printf("end");
    return 0; }