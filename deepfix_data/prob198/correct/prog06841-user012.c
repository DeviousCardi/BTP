#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1;
    scanf("%d\n",&n1);
    int a[20];
    scanf("%d",&a[0]);
    for(int i=1;i<n1;i++) {
        scanf("%d\n",&a[i]); }
    int n2;
    scanf("%d",&n2);
    int b[20];
    for(int i=0;i<n2;i++) {
    scanf("%d",&b[i]); }
    int temp;
    for(int i=0;i<n1;i++) {
        for(int j=i;j<n1;j++) {
            if(a[i]>a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    int t;
    int flag;
    for(int i=0;i<n1;i++) {
        flag=0;
        for(int j=0;j<n2;j++) {
            if(a[i]!=b[j]) {
                flag=1;
                t=i;
                break; }
            else
            flag=2; } }
    if(flag==1)
    printf("%d",a[t]);
    if(flag==2)
    printf("NO");
	return 0; }