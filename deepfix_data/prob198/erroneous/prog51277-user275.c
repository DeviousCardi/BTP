#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,a[20],b[20],k=0,min=0,max=0,count=0;
	scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]); }
    while((count<n2)&&(k<n1)){
        count=0
        for(int i=0;i<n1;i++){
            if(a[i]<a[min])
                min=i;
            else if(a[i]>a[max])
                max=i; }
        for(int i=0;i<n2;i++){
            if(a[min]!=b[i])
                count=count+1; }
        if(count!=n2)
            a[min]=a[max];
        else
            break;
        k++; }
	return 0; }