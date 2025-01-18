#include <stdio.h>
/*
void main()
{
    int a=4;
    //sizeof(a) returns an unsigned int, and -1 is a signed int
    //therefore relational operator cant compare two operands of different datatypes and 
    //doesnt execute the if block but executes the else block instead 
    if (sizeof(a)>-1)
    printf("true");
    else
    printf("false");
} 

void main(){
    float b = 0.1;
    //in this if statement 0.1 is read as a double value by the compiler,
    //meanwhile b holds a float value of 0.1 which is of 6 degrees precision
    //as relational operator does not compare two operands of different datatypes
    //it does not execute the if block;
    if(b==0.1)
    printf("true");
else
printf("false");
}

int main(){
    int a,b=2,c=3;
    //nothing inside the sizeof() operator will be executed in run time;
    //i.e. the value of b will not be incremented and value of c will not be decremented in runt time;
    //sizeof() is a compile time operator
    //it only returns the size of the datatype of the variable stored in its braces;
    a=sizeof(b+++c--);
    printf("a=%d\nb=%d\nc=%d",a,b,c);
    return 0;
}

void main(){
    int a=1,b=2,c=3;
    //the compiler will check the first if block here.
    // as it holds false, control will jump to the else block;
    //but notice here that there is no else block for the first if block;
    //the first if block contains two statements and there are not curly braces
    //assigned to those statements;
    //this means that the else block in the program belongs to the second if block;
    //nothing will be executed in this program.
    if(a>b)
    if(a>c)
    printf("a is greater");
else
printf("a is smoll");
}
*/

/*
void main(){
    
    char c='a',*ptr=&c;
    void *ptr1=&c;
    short *point,ex;
    printf("%d,%d",sizeof(c),sizeof(char));
    printf("\n%lu,%lu,%lu",sizeof(char *),sizeof(*ptr),sizeof(ptr));
    printf("\n%lu,%lu",sizeof(*ptr1),sizeof(ptr1));
    printf("\n%lu,%c,%c",sizeof(void),*(char *)ptr1,*ptr);
    printf("\n%lu,%lu",sizeof(*point),sizeof(ex));
    printf("\n%lu,%lu",sizeof(void *),sizeof(ptr));
    printf("\n%lu,%lu,%lu",sizeof(100),sizeof(0xffffffff),sizeof(0xffffffffff));
    
    }

*/    


     //void main(){
       // char c;
        //nt i;
        //printf("c=255,displayed value of c is %d\n",c=255);
        /*  
            c is signed char, hence when assigned the value of 255
            its bit representation will be  1111 1111 as usual, but as
            it is signed the msb represents a negative value, hence -1
            will be stored in memory as 1111 1111 in binary represntation 
            for signed char is -1;
        */
        //printf("c=128,displayed value of c is %d\n",c=128);

        /*
        when assigned the number 128 to c , its bit representation will be
         1000 0000. But as c is an signed entity the compiler will read 
         the compiler will read the number as a negative number which is the
         number -128 . hence the value of -128 will be stored in memory when 
         assigned 128.
        */
        //printf("c=ff,displayed value=%x\n",c=-1);
        /*default argument promotion rule as 'c' gets promoted to
        int in this case 
        */
        //printf("c=256, displayed value of c=%d\n",c=256);
        /*overflow condition as max value that c can store in binary is
        255
        */
        //printf("i=-2, displayed value of i =%x",i=-2);
        /*
        2=0000 0000  0000 0000  0000 0000  0000 0010
        
        1's complement of 2 is: 1111 1111  1111 1111  1111 1111  1111 1101
        2's complement of 2 is: 1111 1111  1111 1111  1111 1111  1111 1110
        hence -2 in hexadecimal format is : 0xfffffffe
        */


        //test 
        //printf("\ni=%d",i=0xffffffff);

        //printf("\ni=256, displayed value of x is:%x",i=256);
        //printf("\ni=-256, displayed value of x is %x",i=-256);
        
        /*
        i=-256;
        256= 0000 0000  0000 0000  0000 0001  0000 0000
        1's complement=1111 1111  1111 1111  1111 1110  1111 1111
        2's complement=1111 1111  1111 1111  1111 1111  0000 0000

        */
        



    //}



    //c program to find out the maximum and minimum values for a datatype
    /*void main(){
        short s=1,ss=1;
        int i=1,j=1;
        /*
        least value for i =1000 0000  0000 0000
        max value for 1=0100 0000  0000 0000

        */
        //least value of short 
        /*while(i<(sizeof(s)*8)){
            s=s<<1;
            //ss=s<<1;
            //s=ss;
            ++i;
            //printf("\n%d",s);
            if(j<(sizeof(s)*8-1)){
            ss+=s;
            ++j;
            }
        }

        
        printf("least value of s=%d",s);
        printf("\nmax value of ss=%d",ss);


    }
    */


    //c program to find the maximum and minimum values of datatypes
    void size(int x){
        long long s=1,ss=1;
        long long i=1,j=1;
        unsigned long long k=1;
        /*
        least value for i =1000 0000  0000 0000
        max value for 1=0100 0000  0000 0000

        */
        //least value of short 
        while(i<x*8){
            s=s<<1;
            //ss=s<<1;
            //s=ss;
            ++i;
            //printf("\n%d",s);
            if(j<(x*8-1)){
            ss+=s;
            ++j;
            }
            k+=s;
        }

        
        printf("least value that can be stored in given bytes=-%lld",s);
        printf("\nmax value that can be store in given bytes=%lld",ss);
        printf("\n max unsigned value of given bytes =%llu",k);

    }

    int main(){
        int byte;
        printf("enter the number of bytes:");
        scanf("%d",&byte);
        size(byte);

    }


int main(){
    char a='a',b='b',c=a+b;
    if(c>'c')
    printf("true");
    else
    printf("false");
}

