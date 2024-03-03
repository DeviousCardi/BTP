#include <stdio.h>
int main() {
    int h,p,i,j,cp=1,np,flag=1;
    scanf("%d",&h);
    scanf("%d",&p);
    for(i=0;i<p-1;i++) {
        scanf("%d",&np);
        if(np<cp) {
            h=h-cp+np;
            if(h<=0) {
                flag=0;
                break; } }
        j=cp;
        cp=np; }
    if(flag==0)
        printf("No");
    else
        printf("Yes");
    return 0; }