#include<stdio.h>

int main(){

// three type of instruction 
// 1.type declaration instruction
// int a = 4,b,c;
// b = c = a;
// printf("the value of a is %d\n",a);
// printf("the value of a is %d\n",b);
// printf("the value of a is %d\n",c);   

// // //its throw error because c is its follow same order in which they are written, c puche ga ki ey 'a' kaya hai because use phale a ka vlue batana hoga 
// // float b = a + 8.9
// // float a = 1.4

// //code dont give error 
float a = 1.4;
float b = a + 8.9;
 
 printf("the value of b is %f\n",b);

    return 0;
}