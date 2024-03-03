#include <stdio.h>
int main(){
    int i=0,p,w,a[i],max,min;
    int temp;
 scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d",&w);
        a[i]=w; }
    for(i=0;a[i]<a[i+1];i++){
        for (i=0;i<p;i++){
        if(a[i]>a[i+1]){
            max=a[i];
            min=a[i+1]; }
        else{
            max=a[i+1];
            min=a[i];
            a[i+1]=temp;
            a[i+1]=a[i];
            a[i]=temp; } }
        printf("%d",a[i]); }
    printf("end");
    return 0; }