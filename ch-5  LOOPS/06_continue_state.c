#include<stdio.h>

int main(){

    //  for(int i =1 ;i<=10;i++){
        
    //     if(i==5){
    //         continue;; // 5 ko skip kar diya 🙂
    //     }
    //     printf("%d \n",i);
    //    }

    //     printf("END");

    


//Q.Print all numbers from 1 to 10 except for 6.

    // for (int i = 1; i <= 10 ; i++)
    // {
    //     if(i == 6)
    //         continue;
    //     printf("%d\n",i);
    // }
    



// //Q.PRINT ALL THE even NUMBER FROM 5 TO 50.


//     for (int i = 5; i <= 50; i++)
//     {
//         if(i % 2 == 0){
//             printf("%d\n",i);
//         }
//     }
    




// //Q.PRINT ALL THE ODD NUMBER FROM 5 TO 50.


//     for (int i = 5; i <= 50; i++)
//     {
//         if(i % 2 != 0){
//             printf("%d\n",i);
//         }
//     }


//Q. PRINT THE FACTORIAL NUMBER n.

    // int n;
    // printf("enter the no. : ");
    // scanf("%d",&n);

    // int fact = 1;
    // for(int i=1 ; i<=n ; i++){
    //     fact = fact * i;
    // }
    // printf("The factorial of %d \n",fact);


//Q.PRINT THE TABLE IN REVERSE ORDER  OF A GIVEN NUMBER.


    int n;
    printf("enter the no. : ");
    scanf("%d",&n);


    for(int i=10 ; i>=1; i--){
        printf("%d \n",n*i);
    }


    
    return 0;
}