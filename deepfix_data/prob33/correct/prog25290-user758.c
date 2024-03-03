#include <stdio.h>
int main() {
    int h,p,crhlt;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    int ar[p];
    for(int i=0;i<p;i++)
    scanf("%d",&ar[i]);
    if((h>0) || (p>=2 && p<=100)){
        for(int j=0;j<p-1;j++){
            if(ar[j]>ar[j+1]){
                crhlt=h-(ar[j]-ar[j+1]); } } }
     if(crhlt>0)
        printf("Yes");
        else
        printf("No");
    return 0; }