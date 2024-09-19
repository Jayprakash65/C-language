// Logical operator

// && AND

// || OR

// ! NOT

#include<stdio.h>

int main(){
   
    printf("%d\n",(5>4) && (4>3)); // 1st state.= T ; 2nd state. = T (1) ; so output is TRUE
    printf("%d\n",(5>4) && (3>4)); // 1st state.= T ; 2nd state. = F (0); so output is FALSE
    
    printf("%d\n",(6>4) || (9>3)); // 1st state.= T ; 2nd state. = T (1) ; so output is TRUE(1)
    printf("%d\n",(8>4) || (3>4)); // 1st state.= T ; 2nd state. = F (0) ; so output is TRUE(1)
    printf("%d\n",(4>5) || (4>3)); // 1st state.= F ; 2nd state. = F (0) ; so output is FALSE(0)
    
    printf("NOT: %d\n",!(3>4)); 
    printf(" %d\n",!(5>1)); 
    printf(" %d\n",!((5>1) && (3>4)));  // noramal output 0 but after using not its reverse the output so output is 1
    
    return 0;
}