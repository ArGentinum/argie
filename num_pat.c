#include <stdio.h>
#include <math.h>
void main(){
    int a[500][500],b,x,y,z,i,j,ch,x2;
    int zero=0,one=1,x1,cnt,org;
    printf("enter the element: ");
    scanf("%d",&x);
    y=x;
    org=x;
    x1=x-1;
    x2=x-2;
    z=x*x;
    if(org%2!=0 && org>=1){
    for(cnt=0;z>=1;++zero,++one,--x1,ch=0,--x,--x2){
    for(ch=0;ch<4;++ch){
    switch(ch){
        case 0: 
        for(i=zero;i<one;++i){
            for(j=x1;j>=zero;--j,--z){
                a[i][j]=z;
            }
        }
        break;

    case 1:
    for(i=one;i<x;++i){
        for(j=zero;j<one;++j,--z){
            a[i][j]=z;
        }
    }
    break;

    case 2 :
    for(i=x1;i<x;++i){
        for(j=one;j<x;++j,--z){
            a[i][j]=z;
        }
    }
    break;
    

    case 3 :
    for(i=x2;i>zero;--i){
        for(j=x1;j<x;++j,--z){
            a[i][j]=z;
        }
    }
    
    break;
}

}
}
 for(i=0;i<org;++i){
        for(j=0;j<org;++j){
            printf("%5d",a[i][j]);
        }
        printf("\n\n");
    }
}
else
printf("even numbers are not suitable for this pattern");
}