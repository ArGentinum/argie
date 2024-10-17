//c program to multiply a 1*3 and 3*1 matrix
#include <stdio.h>
void main(){
int a[50][50],x,y,i,j,i1,j1,n=0,m=0,zero=0,one=1;
printf("enter the max number of rows for A: ");
scanf("%d",&x);
printf("enter the max numbrt of colns for A: ");
scanf("%d",&y);
for(i=0;i<x;++i){
    for(j=0;j<y;++j){
        printf("a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}

int b[50][50],x1,y1;
printf("enter the number of rows for B: ");
scanf("%d",&x1);
printf("entet the number of columns for B: ");
scanf("%d",&y1);

for(i1=0;i1<x1;++i1){
    for(j1=0;j1<y1;++j1){
        printf("b[%d][%d]: ",i1,j1);
        scanf("%d",&b[i1][j1]);
    }
}
for(i=0;i<1;i++){
    for(int cnt=0;cnt<x1;++cnt,m=0,++zero,++one,n=0){
    for(j=0;j<y;++j){
        printf("\na[%d][%d]:%d",i,j,a[i][j]);
        for(i1=m;i<x;i++){
            for(j1=zero;j1<one;++j1){
                printf("\nb[%d][%d]=%d",i1,j1,b[i1][j1]);
                break;
            } 
            break;
        }
             ++m;
            n+=a[i][j]*b[i1][j1];
    }
    printf("%2d",n);
}
}

}