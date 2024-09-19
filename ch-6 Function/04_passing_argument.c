#include<stdio.h>
#include<math.h>

// Function can take some value and give some value  
// take value means --> parameter 
// give some value --> return value





//ADD A and B 



// int sum(int a, int b);

// int main(){

//  printf("enter the value of a : ")
//  scanf("%d",&a);

//  printf("enter the value of b : ")
//  scanf("%d",&b);

//  int s = sum(a,b);
//  printf("sum is : %d\n",s);
//     return 0;
// }

// int sum(int a, int b){

//     return a+b;
// }


// //PRINT TABLE GIVEN VALUE n



// void printable(int n);

// int main() {
//     int n;
//     printf("enter the value of n : ");
//     scanf("%d",&n);

//     printable(n);// argument or actual parameter 

//     return 0;
// }


// void printable(int n) { // parameter or formal parameter

//     for (int i = 1; i <= 10; i++)
//     {
//        printf("%d\n",n*i);
//     }
    

// }




// //Q. calcute the 18% tax on real price.


// int calculateprice(float value);

// int main() {
//     float value = 150.0;
//     calculateprice(value);

//     return 0;
// }

// int calculateprice(float value){
//     value = value + (value * 0.18);
//     printf("final price is : %f",value);
// }


// //Q. Use library Function to claculate the square of a number given by the user.

// int main(){

//     int n = 5;
//     printf("%f", pow(n, 2));


//     return 0;
// }


//Q. Write function to calculate area of a square, a circle and a rectangle

    float areaSquare(float side);
    float areaCircle(float rad);
    float areaRectangle(float a, float b);

    int main(){

        float areaSquare(4);
        float areaCircle(5);
        float areaRectangle(5, 10);

        return 0;
    }

    float  areaSquare(int side){
        return side * side;
    }

    float areaCircle(float rad){
        return 3.14 * rad * rad;
    }

    float areaRectangle(float a, float b){
        return a * b;
    }

