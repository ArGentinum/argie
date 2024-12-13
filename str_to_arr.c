#include <stdio.h>
#include <string.h>
void str_to_arr(char c[],int size){
    int a[30],i,j;
    char k;
    for(i=0;i<size;++i){
        for(j=0,k='0';j<=9;++j,++k){
            if(k==c[i]){
            a[i]=j;
            break;
            }
        }
    }
    for(i=0;i<size;++i)
    printf("%d",a[i]);
}
void main(){
    char x[100];
    printf("enter the num string:");
    scanf("%s",x);
    int s=strlen(x);
    str_to_arr(x,s);
}
