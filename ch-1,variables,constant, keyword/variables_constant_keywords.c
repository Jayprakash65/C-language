# include<stdio.h> 

int main(){
    // Integar variable 
    int a = 4;
    int b = 5;
    int c = 8 * 5;
    //real variable 
    float pi = 3.14;
    float decimal = 82.5;
    //charcter variable for storing charcter value we use single coloum value 
    char hastag = '#';

    //Output are - %d --> integer 
    //           - %f--->real value
    //           -%c ----> charcter

    printf("the value of a is %d \n",a);
    printf("the value of b is %d \n",b);
    printf("sum of a and b %d \n", a + b );
    printf("the value of c is %d\n", c);
    printf("the value of c is %f\n", pi);
    printf("the value of c is %c\n", hastag);

    

    return 0;
}