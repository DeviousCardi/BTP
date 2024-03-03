#include <stdio.h>
int main() {
    int h,p,hd,crhlt;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    int ar[p];
    for(int i=0;i<p;i++)
    scanf("%d",&ar[i]);
    if((h>0) || (p>=2 && p<=100)){
        for(int j=0;j<p;j++){
            if(ar[j]>ar[j+1]){
                hd=ar[j]-ar[j+1];
                crhlt=h-hd; } } }
    printf("%d",crhlt);
     if(crhlt>0)
        printf("Yes");
        else
        printf("No");
    return 0; }