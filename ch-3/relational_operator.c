
// Relational operators

// ==   ,equality check 

// >, >=

// <, <=

// !=  (not equal to )

 #include<stdio.h>
 
 int main(){
    
    
    printf("%d \n", 4==4);  //outupt 1 means true if 0 false
    printf("%d \n", 4==3);  //outupt 1 means true if 0 false

    printf("%d \n",3>4);  // output = 0 means false 
    printf("%d \n",4>3);  // output = 1 means true 
    printf("%d \n",4>4);  // output = 0 means false because 4 is not greater than 4 it eqal to 
    printf("%d \n",4>=4);  // output = 0 means false 

    printf("less than: %d \n",3<4);   
    printf("%d \n",4<3);  
    printf("%d \n",4<4);  
    printf("%d \n",4<=4);  
    
    printf(" not equal too part: %d \n",4 != 4);  // false statement hai isley output ayega 0
    printf("%d \n",4 == 4); // true (1)satement 
    printf("%d \n",4 == 3); // false (0) satement 
    




    return 0;
 }