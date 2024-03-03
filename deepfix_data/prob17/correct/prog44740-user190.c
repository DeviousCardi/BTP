#include <stdio.h>
int main() {
    int n1,c=0,k,count=0;
    scanf("%d\n",&n1);
    int a[n1],i;
    for(i=0;i<n1;i++){
        scanf("%d ",&a[i]); }
    int n2;
    scanf("%d",&n2);
    int b[n2],j;
    for(j=0;j<n2;j++){
        scanf("%d ",&b[j]); }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                c=1;
                break; } }
        if(c==1){
            break; } }
    while(i<n1 && j<n2){
            if(a[i]==b[j]){
                count++; }
        i++;
        j++; }
    if(count==n2){
        printf("YES"); }
    else{
        printf("NO"); }
	return 0; }