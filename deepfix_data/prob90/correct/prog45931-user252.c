#include <stdio.h>
int main() {
    int ln,nm,i,j,a[500],n[1000],c,flag=0;
    scanf("%d\n",&ln);
    scanf("%d\n",&nm);
    for(i=0;i<500;i++) {
        a[i]=0; }
    for(i=0;i<nm;i++) {
        scanf("%d ",&n[i]);
        c=n[i];
        a[c]=a[c]+1; }
    for(i=0;i<nm && flag==0 && n[i]<=ln;i++) {
        for(j=0;j<nm && n[j]<=ln;j++) {
            c=ln-n[i];
            if(a[c]!=0) {
                flag=1;
                break; } } }
    if(flag==1) printf("lucky");
    else printf("unlucky");
    return 0; }