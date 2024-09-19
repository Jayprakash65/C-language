#include<stdio.h>

int main(){

    // for(int i =1 ;i<=10;i++){
        
    //     if(i==5){
    //         break;
    //     }
    //     printf("%d \n",i);
    // }

    //     printf("END");




//Q.Keep taking numbers as input from user until user enters an odd number.


    // int n;
    // do{
    //     printf("Enter the no. : ");
    //     scanf("%d",&n);
    //     printf("%d \n",n);
    //     if(n % 2 != 0){
    //         break;
    //     }
    // }while(1);

    // printf("end \n");



//Q.Keep taking numbers as input from user until user enters an NO. 22.

    // int n;
    // do{
    //     printf("Enter the no. : ");
    //     scanf("%d",&n);
    //     printf("%d \n",n);
    //     if(n == 22){
    //          break;
    //     }
    // }while(1);

    // printf("end");


//Keep taking numbers as input from user until user enters a number which is multiple of 7.


    int n;
    do {
        printf("Enter the no. : ");
        scanf("%d",&n);
        printf("%d \n",n);
       if(n % 7 == 0){
            break;
        }
    } while(1);

    printf("end \n");






    return 0;
}
