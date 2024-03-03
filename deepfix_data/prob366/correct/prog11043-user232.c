#include <stdio.h>
int main(){
    int n,min,l,i,j,c,k,d;
    scanf("%d",&n);
    c=2*n;
    int a[c];
    min=200;
    d=0;
    if(n<200) {
        for(k=0;k<c;k++)
        scanf("%d",&a[k]);
        for(i=0;i<c;i++) {
            for(j=i+1;j<c;j++) {
                if(a[i]==a[j]) {
                    l=j-i;
                    d++; }
                if(min>l)
                min=l; }
            if(d==n)
            break; }
        printf("%d",min); }
    return 0; }