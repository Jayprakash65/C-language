// shardha di question 

#include<stdio.h>

int main(){

// Q1. WRITE A PROGRAMME TO CHECK IF A NUMBER IS DIVISIBLE BY 2 OR NOT.

//    int x;
//    printf("Eenter a no : ");
//    scanf("%d",&x);
//    printf("the number is : %d\n", x % 2 == 0); // 1 mens true ; 0 means false.
    
// Q2. CHECK THE NUMBER IS ODD OR EVEN 

// Agar koi nuber 2 sai divide kar jata hai(matlab remainder 0 hai ) tho wo even(1) hoga or agr nahi tho odd(0)

    // int x;
    // printf("Eenter a no : ");
    // scanf("%d",&x);
    // printf("the number is : %d\n", x % 2 == 0);


// Q3. PRINT 1(TRUE) OR 0(FALSE) FOR FOLLOWING STATEMENT 
// (A) if its sunday  & its snowing ---> true 

    // int issunday = 1; //st statement is true 
    // int issnowing = 1; //2nd statement is true ; tho true print karne kai le dono statement true hone chahiey in AND
    // printf("%d\n", issunday && issnowing);
  

// (B)IF ITS MONDAY 0R ITS RAINING ---> TRUE 

    // int ismonday = 0;  // or kai ley koi bhi ek statement true hona chahiey tho output true ho jayega 
    // int israining = 1; 
    // printf("%d\n", ismonday || israining);


// (c) if a no. is greater than 9 and less than 100 -->TRUE 
// ey 1 dega output jab condition fullfill hogi otherwise 0 dega 
    int x;
    printf("enter a no.:");
    scanf("%d",&x);
    printf("%d\n",x>9 && x<100);
    
    return 0;
}