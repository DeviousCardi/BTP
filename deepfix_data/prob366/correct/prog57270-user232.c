#include <stdio.h>
int main(){
    int n,m,min,i,j,k,l,d;
    scanf("%d",&n);
    m=2*n;
    int a[m];
    if(n<200) {
        l=0;
        d=0;
        min=200;
        for(i=0;i<m;i++)
        scanf("%d",&a[i]);
        for(j=0;j<m;j++) {
            for(k=j+1;k<m;k++) {
                if(a[k]==a[j]) {
                    l=k-j;
                    d++;
                    break; } }
            if(min>l)
            min=l;
            if(d==n)
            break; }
        printf("%d",min); }
        return 0; }