#include <stdio.h>

int main()
{

    // int day;     // 1-mon , 2-tues etc 
    // printf("Enter the day (1-7)\n");
    // scanf("%d", &day);

    // switch (day)
    // {
    // case 1:
    //     printf("monday\n");

    //     break;

    // case 2:
    //     printf("tuesday\n");

    //     break;
    // case 3:
    //     printf("wednesday\n");

    //     break;

    // case 4:
    //     printf("thrusday\n");

    //     break;

    // case 5:
    //     printf("friday\n");

    //     break;

    // case 6:
    //     printf("saturday\n");

    //     break;

    // case 7:
    //     printf("sunday\n");

    //     break;

    // default:
    //     printf("not valid day \n");
    //     break;
    // }

    // next example

    // Q.write a programe to find grade of a student given his marks based on below
    //  90-100 -> A
    //  80-90 ->B
    //  70-80 ->c
    //  60-70 ->D

    int marks;
    printf("Enter your marks\n");
    scanf("%d", marks);

    switch (marks)
    {
    case 90 ... 100:
        printf("A\n");
        break;

    case 80 ... 89:
        printf("B\n");
        break;

    case 70 ... 79:
        printf("C\n");
        break;

    case 60 ... 69:
        printf("D\n");
        break;

    default: printf("Fail\n");
        break;
    }

    return 0;
}