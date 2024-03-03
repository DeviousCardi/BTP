#include<stdio.h>
int main() {
    int n1,n2;
    int a1[20];a2[20];
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
    scanf("%d",&a1[i]);
    scanf("%d",&n2);
    for(int i=0;i,n2;i++)
    printf("%d",&a2[i]);
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n1;j++) {
            if(a1[i]>a1[j]) {
                k=a1[j];
                a1[j]=a1[i];
                a1[i]=k; } } }
        for(int i=0;i<n2;i++) {
        for(int j=0;j<n2;j++) {
            if(a1[i]>a1[j]) {
                int k=a1[j];
                a1[j]=a1[i];
                a1[i]=k; } } } }