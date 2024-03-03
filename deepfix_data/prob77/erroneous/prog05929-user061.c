#include <stdio.h>
int main() {
    int i,j, min, max;
    scanf("%d",&i);
    printf("/n");
    if((i>=2)&&(i<=1000)){
        int a[i];
        for(j=0;j<i;j++){
        scanf("%d", &a[j]); }
    min= a[0]; max= a[0];
     for(k=1;k<i;k++){
         if(max<a[k]) max=a[k];
         if(min>a[k]) min=a[k]; }
    m=min;
    t=m;n=max;
    max=m;
    min=n;
    for(j=0;j<i;j++){ printf("%d", a[j]);}
    printf("end");
    return 0;}