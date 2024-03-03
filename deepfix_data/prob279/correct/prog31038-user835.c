#include <stdio.h>
int main() {
    int num,j,i,temp,a[100];
    int sum=0;
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
    printf("%d\n",sum);
    printf("%d\n",a[num-1]+1);
    return 0; }