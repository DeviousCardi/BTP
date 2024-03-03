#include <stdio.h>
int main() {
    int h,p,t,crhlt,plt;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d ",&t);
    for(int j=0;j<p-1;j++){
        scanf("%d ",&plt);
        if(plt<t){
           crhlt=h-(t-plt);
           t=plt; }
        else t=plt; }
     if(crhlt>0)
        printf("Yes");
        else
        printf("No");
    return 0; }