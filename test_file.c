#include <stdio.h>
void main(){
    int a,b,c,d,e,f,g=0,cnt=0,x;
    printf("enter the max number of rows: ");
    scanf("%d",&a);
    for(b=1;b<=a;++b){
        for(d=b;d<a;++d){
            printf(" ");
        }
        for(c=0,cnt=0;c<b;++c,++cnt){
            if((c==0)||((b-c)==1)||cnt==1||(b-c)==2)
            printf(" *");
        else
        printf("  ");
        }
        printf("\n");
    }
    for(b=1;b<=a;++b){
        for(d=1;d<b;++d){
            printf(" ");
        }
        for(c=b,cnt=0;c<=a;++c,++cnt){
            if(c==b||a==c||cnt==5||(a-c)==5)
            printf(" *");
        else
        printf("  ");
        
        }
        printf("\n");
    }
}