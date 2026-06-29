// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int bavery() {
    // Write C code here
    printf("Ari is very gross");
    //whole number is an int uses d% for decible
    int age = 20;
    int day = 23;
    
    printf("\nyou are %d years old",age);
    
    printf("\nThe day is %drd",day);
    //use float to store decimals uses f% for floating point number
    float gpa = 4.59;
    float price = 100.99;
    printf("\nMy gpa is %f this year", gpa);
    
    printf("\nThis costs about %.1f", price);
    //use double to store a number with a lot of decimals uses %lf for long form floating point number
    double pi = 3.14159265358979;
    //char is a character and is only one letter uses %c as character
    char grade = 'B';
    printf("\nyour grade is %c", grade);
    
    printf("\nPi is about equal to %.14lf", pi);
    //to store more than one character set up the char as a string char[] you then use %s for its string pull
    char name[] = "Gross";
    
    printf("\nAri is very %s", name);
    
    //boolean things are either truth or false
    bool isGrossy = true;
    if (isGrossy = true){
        printf("\nAri is very gross");
    } else {printf("\n Ari is still very gross");}
    
    //format specifiers 
    int num1 = 300;
    int num2 = 20;
    int num3 = 1;
    printf("\n%03d\n",num1);
    printf("%03d\n",num2);
    printf("%03d\n",num3);
    //the thing inbetween the percent and the discriber shows how many numbers to print total, for example %3d prints the int with 3 digits
    //you can add a negetive sign before it to switch the direction you can also add a zero inbetween to replace all the spaces with 0
    float price1 = 5.99;
    float price2 = 8.99;
    float price3 = 89.99;
    printf("\n%f",num1);
    printf("%f\n",num2);
    printf("%.2f\n",num3);
    //you can add a .number inbetween any decimal number to tell the console how many decimals to pull
    
    //user imput thingy
    int age1 = 0;
    float gpa1 = 0.0;
    char grade1 = '\0';
    char name1[30] = ""; 
    printf("Enter your age:");
    scanf("%d", &age1);
    printf("your age is %d");
    int magicNumber = 0; 
    printf("\n\n\nThis is a magic number guesser.");
    printf("\n I can guess your number");
    printf("\n Enter your number here: ");
    scanf("%d", &magicNumber);
    printf("Was your number %d?", magicNumber);
    

    return 0;
}
