#include <stdio.h>
int main() {
    int h,p,t,crhlt,plt;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d ",&t);
    if((h>0) || (p>=2 && p<=100)){
        for(int j=0;j<p;j++){
            scanf("%d",&plt);
            if(plt<t){
                crhlt=h-(t-plt);
                t=plt; } } }
     if(crhlt>0)
        printf("Yes");
        else
        printf("No");
    return 0; }