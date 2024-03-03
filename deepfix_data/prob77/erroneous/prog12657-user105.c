#include <stdio.h>
int main() {
    int m,n;
 int i=0,p,w,a[i],max=0,min=1000000,temp;
 scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d ",&w);
        a[i]=w;}
        for (i=0;i<p;i++){
        if(a[i]>max){
            max=a[i]; }
        else if(a[i]<min){
            min=a[i]; }
       for(i=0;i<p;i++){
           if(a[i]==max){
               i=m;
           if(a[i]==min){
               i=n;} } }
    temp=a[m];
    a[m]=a[n];
    a[n]=temp;
    for(i=0;i<p;i++){
        printf("%d ",a[p]); }
    printf("end");
    return 0; }