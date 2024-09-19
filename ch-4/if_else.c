#include<stdio.h>

int main(){

// if- else 

   // 1st example

    // int a;
    // printf("enter the number");
    // scanf("%d",&a);

    // if(a%2==0){
    //     printf("%d is even \n", a);
    // }
    // else{
    //     printf("%d is odd \n", a);

    // }

//    // 2nd example 

//     int age;
//     printf("Enter your age");
//     scanf("%d",&age);

//     if(age>18 && age<90){
//         printf("you can drive");
//     }
//     else{
//         printf("you cannot drive");
//     }


// // else if 


//     int age;
//     printf("enter your age ");
//     scanf("%d",&age);

//     if(age>=18){
//         printf("adult \n")
//     }
//     else if(age>13 && age<18){
//         printf("teenger")
//     }
//     else{
//         printf("child")
//     }

//     return 0;
// }


//*// NESTED IF 

 int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num>=0)
    {
        printf("The number is + ");
        if (num%2==0)
        {
        printf("The number is even ");
            
        }else{
        printf("The number is odd ");

        }
        
    }
    
    else{
        printf("The number is - ");
    }