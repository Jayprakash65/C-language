// //Q1.(a) by using hard code input 

// # include<stdio.h>

// int main(){
//     int length = 4, breadth = 5 ;
//     printf("area of rectangle is %d \n",length*breadth);
//     return 0;
// }


// // // (b) BY USING INPUT SUPPIED BY THE USER

# include<stdio.h>

int main(){
    int lenght, breadth;
    printf("what is the lenght of the rectangle ");
    scanf("%d",&lenght);

    printf("what is the breadth of the rectangle ");
    scanf("%d",&breadth);

    printf(" the area of the rectangle is %d\n",lenght*breadth);

    

    return 0;
}

// // Q 2. FIND THE AREA OF CIRCLE AND THE VOLUME OF CYLINDER

// #include <stdio.h>

// int main(){


//     int radius = 4;
//     float pi = 3.14;
//     printf("the area of he circle is %f\n", pi * radius * radius);
//     int height = 5;
//     printf("the volume of he cylinder is %f\n", pi * radius * radius* height);

//     return 0;
// }

// // // Q3. CONVERT CELCIUS INTO Fahrenheit

// # include<stdio.h>

// int main(){

//     float celcius = 40;
//     float Fahrenheit = (celcius * 1.8) + 32;
//     printf("the value of celcius value in fahrenheit is %f\n",Fahrenheit);

//     return 0;

// }


// // // Q4. FIND SIMPLE INTEREST

// #include <stdio.h>

// int main()
// {
//     int principal = 300000, rate = 4, year = 1;
//     int simpleinterest = (principal * rate * year / 100);
//     printf("simple intest is %d\n", simpleinterest);

//     return 0;
// }