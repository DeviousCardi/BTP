#include <stdio.h>
int main() {
    int num,j,i,temp,a[100],h;
    int sum=0;
    int count=0;
    int s=0;
    scanf("%d\n",&num);
    for(i=0;i<num;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<num;i++) {
        for(j=0;j<num;j++) {
            if(a[i]<=a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    for(i=0;i<num;i++) {
        for(j=0;j<num;j++) {
           if((a[i]-a[j])==0&&i!=j) {
               sum=a[i]; }
           else {
               continue; } } }
    for(i=0;i<num;i++) {
        count=count+a[i];
        s=s+i; }
    h=(s-(count-sum))
    printf("%d\n",sum);
    printf("%d\n",h);
    return 0; }