#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int gcd();
int basicOperations();
int complexOperations();
int misOperations();

int main(){

    int MChoice;
    bool isContinue = false;

    while (isContinue != true)
    {
        printf("****************|Enter your choice|****************\n");
        printf("\t\t1. Basic Operations\n");
        printf("\t\t2. Complex Math Operations\n");
        printf("\t\t3. MISCELLANEOUS Operations\n");
        printf("\t\t4. Exit\n");

        printf("\t\t>>>> ");
        scanf("%d",&MChoice);
        switch (MChoice)
        {
            case 1:
                printf("****************|Basic Operations|****************\n");
                basicOperations();
                continue;
            case 2:
                printf("****************|Complex Math Operations|****************\n");
                complexOperations();
                continue;
            case 3:
                printf("****************|MISCELLANEOUS Operations|****************\n");
                misOperations();
                continue;
            case 4:
                printf("****************|Thank You For Using|****************\n");
                isContinue = true;
                break;
            default:
                printf("\t\tYou Have to enter the proper option.\n");
                printf("\t\tpress 1 for Basic Operations\n");
                printf("\t\tpress 2 for Complex Math Operations\n");
                printf("\t\tpress 3 for MISCELLANEOUS Operations\n");
                printf("\t\tpress 4 to EXIT from the program\n");
                break;
        }
    }
    

    return 0; 
}

int basicOperations(){
    char operation;
    float num1,num2;

    printf("\t\t'+' for Addition\n");
    printf("\t\t'-' for Substraction\n");
    printf("\t\t'*' for Multiplication\n");
    printf("\t\t'/' for Division\n");

    printf("\t\t>>>> ");
    scanf("%s",&operation);
    printf("\t\tEnter the number: \n");
    printf("\t\t>>>> ");
    scanf("%f",&num1);
    printf("\t\tEnter the number: \n");
    printf("\t\t>>>> ");
    scanf("%f",&num2);
    


    switch (operation)
    {
    case '+':
        printf("\t\tThe sum of %.2f and %.2f is %.2f\n",num1,num2,(num1+num2));
        break;
    case '-':
        printf("\t\tThe difference of %.2f and %.2f is %.2f\n",num1,num2,(num1-num2));
        break;
    case '*':
        printf("\t\tThe product of %.2f and %.2f is %.2f\n",num1,num2,(num1*num2));
        break;
    case '/':
        if (num2 == 0)
        {
            printf("\t\tZero division Error\n");
        }
        else
        {
            printf("\t\tThe division of %.2f and %.2f is %.2f\n",num1,num2,(num1/num2));
        }
        break;
    default:
        printf("\t\tentered operation is invalid\n");
        break;
    }

    return 0; 
}

int complexOperations()
{
    int complexChoice;
    float number;
    printf("\t\t1. Square\n");
    printf("\t\t2. Cube\n");
    printf("\t\t3. Square Root\n");

    printf("\t\t>>>> ");
    scanf("%d",&complexChoice);

    switch (complexChoice){
        case 1:
            printf("\t\tEnter the number: \n");
            printf("\t\t>>>> ");
            scanf("%f",&number);
            printf("\t\t%f\n",number*number);
            break;
        case 2:
            printf("\t\tEnter the number: \n");
            printf("\t\t>>>> ");
            scanf("%f",&number);
            printf("\t\t%f\n",number*number*number);
            break;
        case 3:
            printf("\t\tEnter the number: \n");
            printf("\t\t>>>> ");
            scanf("%f",&number);
            printf("\t\t%f\n",sqrt(number));
            break;
    
        default:
            printf("\t\tYou Have to enter the proper option.\n");
                    printf("\t\tpress 1 for Sqaure\n");
                    printf("\t\tpress 2 for Cube \n");
                    printf("\t\tpress 3 for Square Root\n");
            break;
    }

}

int misOperations(){
    int misChoice,number,num1,num2,res;
    printf("\t\t1. Remainder\n");
    printf("\t\t2. GCD and LCM\n");
    printf("\t\t3. Odd or Even\n");

    printf("\t\t>>>> ");
    scanf("%d",&misChoice);
    switch (misChoice){
        case 1:
            printf("\t\tEnter the number: \n");
            printf("\t\t>>>> ");
            scanf("%d",&num1);
            printf("\t\tEnter the number: \n");
            printf("\t\t>>>> ");
            scanf("%d",&num2);
            res = num1%num2;
            printf("\t\t%d\n",res);
            break;
        case 2:
            gcd();
            break;
        case 3:
            printf("\t\tEnter the number: \n");
            printf("\t\t>>>> ");
            scanf("%d",&number);
            if (number%2==0)
            {
                printf("\t\t%d is Even Number\n",number);
            }
            else
            {
                printf("\t\t%d is Odd Number\n",number);
            }
            
            
            break;
    
        default:
            printf("\t\tYou Have to enter the proper option.\n");
                    printf("\t\tpress 1 for Sqaure\n");
                    printf("\t\tpress 2 for Cube \n");
                    printf("\t\tpress 3 for Square Root\n");
            break;
    }
}

int gcd(){
        int num1,num2,gcd,lcm,rem,nume,den;

        printf("\t\tEnter the number: \n");
        printf("\t\t>>>> ");
        scanf("%d",&num1);

        printf("\t\tEnter the number: \n");
        printf("\t\t>>>> ");
        scanf("%d",&num2);

        nume = (num1>num2)?num1:num2;
        //here we define largest number as numerator
        den = (num1>num2)?num2:num1;
        //here we define smallest number as a denominator
        rem = nume%den;
        // we calculate the reminder of numerator and denominator to run a loop

        while (rem!=0)
        {
            nume=den;
            den=rem;
            rem=nume%den;

            // we run this loopby interchanging the values untill rem is 0
        }

        gcd = den;
        // final denominator is assigned to gcd
        lcm = (num1*num2)/gcd;
        // lcm formula is (num1*num2)/gcd.
    
        printf("\t\tGCD of the given numbers is: %d\n",gcd);
        printf("\t\tLCM of the given numbers is: %d\n", lcm);
    }
