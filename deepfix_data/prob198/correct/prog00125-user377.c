#include <stdio.h>
#include <stdlib.h>
void check(int[],int[],int,int);
void get(int[],int);
void sort(int[],int);
void swap(int*,int*);
void swap(int*a,int*b) {
    int t;
    t=*a;
    *a=*b;
    *b=*a; }
void get(int a[20],int n) {
    for(int i=0;i<n;i++)
    scanf("%d\n",&a[i]); }
void sort(int a[20],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
        if(a[j]<a[i])
        swap(&a[j],&a[i]); }
    for(int i=0;i<n;i++)
    printf("%d",a[i]); }
int main() {
    int a[20], b[20];
    int n1, n2;
    scanf("%d",&n1);
    get(a,n1);
    scanf("%d",&n2);
    get(b,n2);
    sort(a,n1);
	return 0; }