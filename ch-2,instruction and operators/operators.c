#include<stdio.h>

int main(){

    // operator precendence in c ---> priority sai chalega not bodmas   ,,, pririty are  1st --> * , / , %
    //                                                                                   2nd --> + ,-              
    //                                                                                   3rd --> =              
                                                                                     
    int x = 1;
    int y = 3;

    printf("The value of 3*x - 8*y is %d\n",3*x - 8*y); //pahle multiply karenge uske bda substraction
   

    //operators associativity --> jab do priority wale a jaye tho simple  L to right !!
    printf("The value of 8*y / 3*x is %d\n",8*y / 3*x);

    // 8*3 / 3*1 = 24 / 3 ---> will wrong ans for computer ey ham normal math mai kar sakte hai but not in computer 
    // 24/3 = 8
    // 8*1 = 8



    // question prctice 

    int a = 5*2 - 2*3;
    printf("the value of a is %d\n",a);

    int b = 5*2 / 2*3;
    printf("the value of a is %d\n",b);

    int c = 5*(2/2)*3;
    printf("the value of a is %d\n",c);
    
    int d = 5+2 / 2*3;
    printf("the value of a is %d\n",d);

    
    return 0;
}


