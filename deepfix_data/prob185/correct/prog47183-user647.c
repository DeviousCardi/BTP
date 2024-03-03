#include <stdio.h>
int s;
int foo(int a[],int start,int temp,int num,int last){
    if(start==last){
        return 0; }
    else{
        if(num==0){
            return 1; }
        else{
            if(temp==last){
                return foo(a,start+1,start+1,s,last); }
            else{
            int x,y;
            x=num-a[temp];
            if(x<0){
                return foo(a,start,temp+1,num,last); }
            else{
                y=temp+1;
                return foo(a,start,y,x,last); } } } } }
int main() {
    int i,n,truth;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    truth=foo(a,0,0,s,n-1);
    if(truth==1){
        printf("YES"); }
    else printf("NO");
    return 0; }