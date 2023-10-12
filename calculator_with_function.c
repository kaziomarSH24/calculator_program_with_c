
/* 
Name: Md Omar Faruk
Roll: 14
Batch: 104
*/

#include <stdio.h>
#include<math.h>

void add(float a, float b){
    float result;
    result = a + b;
     printf (" \nAddition of %.2f and %.2f is: %.2f\n", a, b, result);  
}
void sub(float a, float b){
    float result;
    result = a - b;
     printf (" \nSubstraction of %.2f and %.2f is: %.2f\n", a, b, result);  
}
void multi(float a, float b){
    float result;
    result = a * b;
     printf (" \nMultiplication of %.2f and %.2f is: %.2f\n", a, b, result);  
}
void division(float a, float b){
    float result;
    result = a / b;
     printf (" \nDivision of %.2f and %.2f is: %.2f\n", a, b, result);  
}
void power(float a, float b){
    float result;
    result = pow(a,b);
     printf (" \nPower of %.2f ^ %.2f is: %.2f\n", a, b, result);  
}
void root(float a){
    double result;
    result = sqrt(a);
     printf (" \nSquear root of %.2f is: %.2lf\n", a, result);  
}


int main(){

    int c;
    float a, b;
    start:
    printf("\n\nEntar your chooces:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Power\n6.Squer Root\n7.Exit. \n");
    scanf("%d",&c);

    if(c==6){
        printf (" Enter a number: ");
         scanf(" %f", &a);
    }else if (c==7)
    {
        return 0;
    }else if(c>7){
        printf (" You Select a wrong number!");  
        goto start;
    }else{
    printf (" Enter the first number: ");  
    scanf(" %f", &a); // take fist number  
    printf (" Enter the second number: ");  
    scanf (" %f", &b); // take second number  
    }

    switch (c)
    {
    case 1:
        add(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        multi(a,b);
        break;
    case 4:
        division(a,b);
        break;
    case 5:
        power(a,b);
        break;
    case 6:
        root(a);
        break;
    
    default:
        return 0;
    }
    goto start;
    
}