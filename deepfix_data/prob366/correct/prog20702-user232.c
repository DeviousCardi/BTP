#include <stdio.h>
int main(){
    int n,min,l,i,j,c;
    scanf("%d",&n);
    c=2*n;
    int a[c];
    min=200;
    if(n<200) {
        for(i=0;i<c;i++)
        scanf("%d",&a[i]);
        for(i=0;i<c;i++) {
            for(j=i+1;j<c;j++) {
                if(a[i]==a[j]) {
                    l=j-i; }
                if(min>l)
                min=l; } }
        printf("%d",min); }
    return 0; }