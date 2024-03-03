#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i,j,temp,count;
    scanf("%d\n",&n1);
    int a[n1];
    for(i=0;i<n1;i++) {
        scanf("%d\n",&a[i]); }
    scanf("%d\n",&n2);
    int b[n2];
    for(i=0;i<n2;i++) {
        scanf("%d ",&b[i]); }
    for(i=0;i<n1;i++) {
        for(j=i+1;j<n1;j++) {
            if(a[i]>a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            if(a[i]==b[j]) {
                count++;
                break; } }
        if(count==0) {
            printf("%d",a[i]);
            break; } }
    if(count)
        printf("NO");
	return 0; }