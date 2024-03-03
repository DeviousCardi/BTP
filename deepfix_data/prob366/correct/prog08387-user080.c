#include <stdio.h>
int main(){
    int a,i,j,k,p,s[200],b[200],l,m,min=0;
    scanf("%d\n",&a);
    for(i=0;i<2*a;i=i+1) {
        scanf("%d",&s[i]); }
    for(j=0;j<2*a;j=j+1)
    {p=1;
        for(k=0;k<2*a;k=k+1) {
            if(s[j]!=s[k]) {
                p=p+1;
                b[j]=p; } } }
    for(l=0;l<2*a;l=l+1)
    {for(m=0;m<2*a;m=m+1){
        if(b[l]<b[m]) {
            min=b[m];
            b[m]=b[l];
            b[l]=min; } } }
    printf("%d",b[0]);
    return 0; }