#include <stdio.h>

int main()
{

    // // Q1.

    // int a = 10;
    // if (a = 11)
    // { // == for equality check but we are using = that mean using for asingment
    //     printf("i am 11");
    // }
    // else
    // {
    //     printf("i am not 11");
    // }





    // // Q.2

    // int physics, chemistry, biology;
    // float total;
    // printf("Enter the physic marks\n");
    // scanf("%d", &physics);

    // printf("Enter the physic marks\n");
    // scanf("%d", &chemistry);

    // printf("Enter the physic marks\n");
    // scanf("%d", &biology);

    //  total = (physics + chemistry + biology)/3;
     

    // if(total >= 40 && physics >= 33 && chemistry>=33 && biology>=33){
    //     printf("congrats you are passed %f \n",total);
    // }
    // else{
    //      printf("sorry you are fail %f \n",total);
    // }






// // Q3. 

//     float tax = 0 , income;
//     printf("Enter your income");
//     scanf("%f",&income);

//     if(income>=250000 && income<=500000){
//         tax = tax + 0.05 * (income-250000) ;
//     }
//     if(income>=500000 && income<=1000000){
//         tax = tax +  0.2 * (income-500000) ;
        
//     }
//     if(income>=1000000){
//         tax = tax + 0.3 * (income-1000000) ;
        
//     }

//     printf("your income tax is %f",tax);





// // Q.4 WHICH IS LEAP YEAR OR NOT  CONDITION ARE In simpler terms, a year is a leap year if it is:  Divisible by 4 but not by 100.
//        //A year is a leap year if it's divisible by 4 and not divisible by 100, or if it's divisible by 400.                                                                                     //    Divisible by 400



//  int year;
//  printf("Enter the year : ");
//  scanf("%d",&year);

//  if(year % 4==0 && year % 100 !=0 || year % 400 == 0 ){
//     printf("%d is a leap year.\n",year);
//  }
// else{
//     printf("%d is not a leap year.\n",year);
// }




    
// //Q.5  


//   int a, b, c, d;
  

//   printf("Enter four numbers: ");
//   scanf("%d%d%d%d", &a, &b, &c, &d);

//   if(a>b && a>c && a>d){
//     printf("gratest is = %d",a);
//   }
// else if (b>c && b>d){
//     printf("gratest is = %d",b);
    
// }
// else if(c>d){
//     printf("gratest is = %d",c);

// }
// else {
//     printf("Greatest is = %d",d);
// }
  

//Q.  IDENTIFY WHICH IS LOWERCASE ANS UPPER CASE 

    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){   // a and 97 is same it called aiccia value 
      printf("lower case");
    }
    else if(ch>='A' && ch<='Z'){
      printf("upper case");
    }
    else{
      printf("the character or anything you enter is not a letter ");
    }



 
  return 0;
}
