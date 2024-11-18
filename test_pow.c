#include <stdio.h>

int max;
/*
//c program to print unique elements in an array
void main(){
    printf("enter the max size:");
    scanf("%d",&max);
    int a[max],i,j,swap;
    //for loop for reading elements into the array
    for(i=0;i<max;++i){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //nested for loop method for overwriting similar elements to 0
    for(i=0;i<max;++i,swap=0){
        for(j=0;j<max;++j){
            if(a[i]==a[j]&&i!=j){
            a[j]=0;
            ++swap;
            }
        }
        if(swap!=0)
        a[i]=0;
    }
    //for loop for printing elements in the array excluding 0's
    for(i=0;i<max;++i){
        if(a[i]!=0)
        printf("%d,",a[i]);
    }
}



//c program to eliminate duplicate elements in an integer array
void main(){
    printf("enter the max size:");
    scanf("%d",&max);
    int a[max],i,j,swap=0;
    //for loop for reading elements into the array
    for(i=0;i<max;++i){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //for loop method for eliminating duplicate elements int the array
    for(i=0;i<max;++i,swap=0){
        for(j=0;j<i;++j){
            if(a[i]==a[j])
            ++swap;
        }
        if(swap==0)
        printf("%d,",a[i]);
    }
    
}


//program to find the largest and the second largest number in an integer array
void main(){
    printf("enter the max size:");
    scanf("%d",&max);
    int a[max],i,swap,j=0,x=0,y=0;
    //for loop for reading elements into the array
    for(i=0;i<max;++i){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //nested for loop logic for finding the largest and second largest number in an integer array
    for(i=0;i<max;++i){
            if(x<a[i])
            x=a[i];
        for(j=0;i>0&&j<=i;++j){
            if(y<a[j]&&a[j]<x)
            y=a[j];
        }
    }
    printf("%d,%d",x,y);
}


// program to print the reverse of an integer array
void main(){
    printf("enter the max size:");
    scanf("%d",&max);
    int a[max],i;
    for(i=0;i<max;++i){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=(max-1);i>=0;--i){
        printf("%d\n",a[i]);
    }
}


//program for matrix multiplication
int max2,may1,may2;
void main(){
    printf("enter the max number of rows for matrix A:");
    scanf("%d",&max);
    printf("enter the max number of colns for matrix A:");
    scanf("%d",&max2);
    int a[max][max2],i,j;
    //nested for loop for reading values into matrix A
    for(i=0;i<max;++i){
        for(j=0;j<max2;++j){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the number of rows for matrix B:");
    scanf("%d",&may1);
    printf("enter the number of colmns for matrix B:");
    scanf("%d",&may2);
    if (max2==may1){
    int b[may1][may2];
    //nested for loop for reading values into matrix B
    for(i=0;i<may1;++i){
        for(j=0;j<may2;++j){
            printf("b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<max;++i){
        for(j=0;j<max2;++j){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("   *\n");

    for(i=0;i<may1;++i){
        for(j=0;j<may2;++j){
         printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("   =\n");

    int c[max][may2],i1,j1,s=0,zero=0,one=0;
    //for loop logic for multiplying matrices
    for(i=0;i<max;++i,zero=0,one=0){
        for(int cnt=0;cnt<may2;++cnt,zero=0,++one,s=0){
        for(j=0;j<max2;++j,++zero){
            for(i1=zero;i1<may1;++i1){
                for(j1=one;j1<=one;++j){
                      s+=a[i][j]*b[i1][j1];
                    break;
                }
                break;
            }
        }
        printf(" %d",s);
    }
    printf("\n");
    }
    printf("\n");
    }
    else 
    printf("matrix multiplication not possible");
    
    //testing
    printf("\n");
    for(i=0;i<max;++i){
        for(j=0;j<max2;++j){
            printf(" %d",a[j][i]);
        }
        printf("\n");
    }
}


*/
//program to find the power of matrix of desired order
void main(){
    int row,colmn;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of columns: ");
    scanf("%d",&colmn);
    int a[row][colmn],i,j,b[row][colmn],c[row][colmn],k,n=0,pow;
    for(i=0;i<row;++i){
        for(j=0;j<colmn;++j){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }
    //test print
    for(i=0;i<row;++i){
        for(j=0;j<colmn;++j){
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf(enter the power of the matrix:);
    scanf("%d",&pow);
    for()
    for(i=0;i<row;++i,n=0){
        for(j=0;j<colmn;++j,n=0){
            for(k=0;k<colmn;++k){
                n+=a[i][k]*b[k][j];
            }
            printf(" %d",n);
            c[i][j]=n;
            }
            printf("\n");
        }
        for(i=0;i<row;++i){
            for(j=0;j<colmn;++j){
                b[i][j]=c[i][j];
            }
        }

        printf("    =?\n");
        for(i=0;i<row;++i){
            for(j=0;j<colmn;++j){
                printf(" %d",c[i][j]);
            }
            printf("\n");
        }
    }
    
    
    






