#include <stdio.h>
int main() {
    int h,p,hd,crhlt;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    int ar[p];
    for(int i=0;i<p;i++)
    scanf("%d",&ar[i]);
    if((h<0) || (p<2 && p>100))
    exit(1);
    else{
        for(int j=0;j<p-1;j++){
            if(ar[j]>ar[j+1]){
                hd=ar[j]-ar[j+1];
                crhlt=h-hd; } }
        if(crhlt>0)
        printf("Yes"); }
    return 0; }