#include <stdio.h>

//c program to print the shape of a diamond using asterisks
 /*
 void main(){
    int a,b,c,d,e;
    printf("enter the number: ");
    scanf("%d",&a);
    d=1;
    //for loops for printing a triangle
    for(b=1;b<=a;++b){ //outer loop for assigning the number of iterations.
        e=b;
        while(e<a){
            printf(" "); //inner loop for printing white spaces
            ++e;
        }
        
        for(c=0;c<d;++c){
            printf("*");   //inner loop for printing asterisks in a pattern
        }
        d+=2;
        printf("\n");
        
    }
    d-=2;
    
    //for loops for printing an inverted triangle
    int f=0;
    for(b=1;b<=a;++b){  //outer loop for limiting the number of iterations to the number of rows specified by the user

        for(e=0;e<f;++e){
            printf(" ");  //inner loop for printing white spaces
            
        }
        for(c=0;c<d;++c){
            printf("*");  // inner loop for printing reverse asterisk pyramid
       
        printf("\n");
        ++f;
        d-=2;
    }  
}

*/

//c program to print an interesting shape using asterisks
// *IMP ADD SPACES AFTER EXECUTION TEST*
void main(){
    int a,b,c,d,e;
    char alp='a';
    printf("enter the number: ");
    scanf("%d",&a);
    d=1;
    //for loops for printing a triangle
    for(b=1;b<=a;++b){
        e=b;
        while(e<a){
            printf(" ");
            ++e;
        }
        
        for(c=0,alp='a';c<d;++c){
            printf("  %c",alp);
            ++alp;
        }
        d+=2;
        printf("\n");
        
    }
    d-=2;
    
    //for loops for printing an inverted triangle
    int f=0;
    for(b=1;b<=a;++b){
        for(e=0;e<f;++e){
            printf(" ");
            
        }
        for(c=0;c<d;++c){
            
            printf("  %d",c);
        }
       
        printf("\n");
        ++f;
        d-=2;
    }
}

/*
//c program to print a basic pyramid
void main(){
    int a,b,c,d,e;
    printf("enter the max number of rows: ");
    scanf("%d",&a);
    for(b=1;b<=a;++b){
        for(c=0;c<b;++c){
            printf(" %d",c);
        }
        printf("\n");
    }
}


//c program to print a mirrored basic pyramid of alphabets
void main(){
    int a,b,c,d;
    char ch;
    printf("enter the max number of rows: ");
    scanf("%d",&a);
    for(b=1;b<=a;++b){
        
        for(d=b;d<a;++d){
            printf(" ");
        }
        for(c=0,ch='a';c<b;++c,++ch){
            printf(" %c",ch); //VVP SPACING BEFORE THE PRINTED CHARACTER CREATES A TRIANGLE!
        }
        printf("\n");

    }
}  


//c program to print an inverted basic pyramid
void main(){
    int a,b,c,d,e;
    printf("enter the max number of rows: ");
    scanf("%d",&a);
    for(b=1;b<=a;++b){
        for(c=b;c<=a;++c){
            printf("*");
        }
        printf("\n");

    }
}


//c program to print a mirrored inverted basic pyramid
void main(){
    int a,b,c,d,e;
    printf("enter the max number of rows: ");
    scanf("%d",&a);
    for(b=1;b<=a;++b){
        for(d=1;d<b;++d){
            printf(" ");
        }
        for(c=b;c<=a;++c){
            printf("*");
        }
        printf("\n");
    }
}

//c program to print asterisks in diamond shape with '+' shape in the middle
void main(){
    int a,b,c,d,e,g=0;
    char f;
    printf("enter the max number of rows: ");
    scanf("%d",&a);
    for(b=1;b<=a;++b){
        //for loop for printing white spaces
        for(d=b;d<a;++d){
            printf(" ");
        }
        for(c=0;c<b;++c){
            printf("*");
        }
        printf("  ");
        for(c=0;c<b;++c,++g){
            if(g>9)
            g=0;
            printf("%d",g);
        }
        printf("\n");
    }
    printf("\n");
    for(b=1;b<=a;++b){
        for(d=1;d<b;++d){
            printf(" ");
        }
        for(c=b,f='a';c<=a;++c,++f){
            printf("%c",f);
        }
        printf("  ");
        for(c=b;c<=a;++c){
            printf("=");
        }
        printf("\n");
    }
}

//c program to print a triangle structure with characters only on the borders
void main(){
    int a,b,c,d,e,f=0;
    printf("enter the number of rows: ");
    scanf("%d",&a);
    for(b=1;b<=a;++b){
        for(d=b;d<a;++d){
            printf(" ");
        }
        for(c=0;c<b;++c,++f){
            if(f>9)
            f=0;
          
            if(((b-c)==1)||c==0||b==a)
            printf(" %d",f);
        else
        printf("  ");
        }
        printf("\n");
    }

}


//c program to print a diamond structure with characters only on the borders
void main(){
    int a,b,c,d,e,f,g=0,cnt=0;
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
            if(c==b||a==c||cnt==1||(a-c)==1)
            printf(" *");
        else
        printf("  ");
        
        }
        printf("\n");
    }
}
*/



     


