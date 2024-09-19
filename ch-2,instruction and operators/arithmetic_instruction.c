#include<stdio.h>
#include <math.h>

int main(){

    int a = 5;
    int b = 8;
    int z ;
    z = b * a; //legal 
    // b * a = z; //illigal valid in normal math but not in computer 
    printf("the value of a+b is: %d\n",a+b);
    printf("the value of a-b is: %d\n",a-b);
    printf("the value of a*b is: %d\n",a*b);
    printf("the value of a/b is: %d\n",a/b); 
    printf("the value of z is: %d\n",z); 
//modular division operator ---> used for check the remainder oor return the remainder
    printf("5 when divided by 2 leavies an remainder of: %d\n",5%2);
    printf("-5 when divided by 2 leavies an remainder of: %d\n",5%2);
    printf("5 when divided by -2 leavies an remainder of: %d\n",5%-2); //eyha par -1 isley nahi hua keuki nemominator mai jo sign hota hai wahi ans mai reflect karta hai !!
    
//Note : 
// 1> no operator is assumed to be present 
    // printf("The vale of 4*5 is %d\n",(4)(5)); --> will not return 20/ wrong !!    
    printf("The vale of 4*5 is %d\n",(4)*(5));
    
// 2> There is no operator to perform expontiation in  'C'.
    printf("The value of 4^5 is %d\n",4^5);//--> will not produce 4 to the power 5 
    printf("The value of 4 to the power 5 is %f\n",pow(4,5));
    
//TYPE COVERSION

    // int and int--> int 
    // int and float--->float
    // float and float ---> float

    printf("the value of 6 + 5 is %d\n",6 + 5);
    printf("the value of 6 + 5.6 is %f\n",6 + 5.6);
    printf("the value of 6.1 + 5.6 is %f\n",6.1 + 5.6);

    printf("the value of 5/2 is %d\n",5/2); // iska real ans tho 2.5 hai but 2 and 5 int hai or int kabhi real value store nahi karta ,so wo 2 dega naki 2.5
    printf("the value of 2/5 is %d\n",2/5); // iska real ans tho 0.4 hai but 2 and 5 int hai or int kabhi real value store nahi karta ,so wo 0 dega naki 0.4
    printf("the value of 5.0/2 is %f\n",5.0/2);  //  int and float = float
    printf("the value of 2.0/5 is %f\n",2.0/5);  //         "
    printf("the value of 3.0/9 is %f\n",3.0/9);  //         "
    
    return 0;

}
