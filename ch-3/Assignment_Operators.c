// Assignment operator 

// =	  x = 5 	x = 5	
// +=	  x += 3	x = x + 3	
// -=	  x -= 3	x = x - 3	
// *=	  x *= 3	x = x * 3	
// /=	  x /= 3	x = x / 3	
// %=	  x %= 3	x = x % 3	
// &=	  x &= 3	x = x & 3	
// |=	  x |= 3	x = x | 3	
// ^=	  x ^= 3	x = x ^ 3	
// >>=	  x >>= 3	x = x >> 3	
// <<=	  x <<= 3	x = x << 3

#include<stdio.h>

int main(){

    int a = 4;
    int b = 1;
    a += b ;  // a = a + b
    printf("%d\n",a);

    a -= b ;  // a = a - b
    printf("%d\n",a);

    a *= b ;  // a = a * b
    printf("%d\n",a);

    a /= b ;  // a = a / b
    printf("%d\n",a);

    a %= b ;  // a = a % b
    printf("%d\n",a);




    return 0;
}