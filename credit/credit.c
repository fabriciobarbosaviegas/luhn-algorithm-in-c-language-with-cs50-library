#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //asks the number of credit card
    long long CreditNumber = get_long("Number: ");

    //creates a counter responsible for calculating the number of decimal places of the card 
    int c = 0;

    //creates a boolean variable responsible for help in validation of the card number
    bool Valid = false;

    //variable responsible for receive the sum of first extracted numbers
    int res = 0;

    //variable responsible for receive the extracted digits
    int Digit = 0;

    //decimal variables responsible of extract the numbers of credit card
    long int ExtractDecimal = 10;
    long int ExtractDecimal2 = 100;

    //Extract and Multiplies every other digit by 2, starting with the numbers second-to-last digit
    long int DigitExtract = (CreditNumber % ExtractDecimal2) / ExtractDecimal;
    Digit = DigitExtract * 2;

//checks if the result of multiplication of the digits is decimal and transform in unitarie numbers
    if (Digit > 9)
    {
        int Digit1 = Digit;
        Digit = (Digit / 10);
        Digit +=  Digit1 % 10;
    }

    //adds the digit in first sum
    res += Digit;

    //repeats the procedures step by step until the final of card number    
    for (long long int i = 100; i < CreditNumber; i *= 100)
    {
        ExtractDecimal *= 100;
        ExtractDecimal2 *= 100;
        DigitExtract = (CreditNumber % ExtractDecimal2) / ExtractDecimal;
        Digit = (DigitExtract * 2);
        if (Digit > 9)
        {
            int Digit1 = Digit;
            Digit = (Digit / 10);
            Digit +=  Digit1 % 10;
        }
        res += Digit;
        c++;
    }
    //reset the variable values and repeats the procedures without the multiplications
    int res2 = 0;
    Digit = 0;
    ExtractDecimal = 1;
    ExtractDecimal2 = 10;
    DigitExtract = (CreditNumber % ExtractDecimal2) / ExtractDecimal;
    Digit = DigitExtract;
    res2 += Digit;

    //variable responsible of extract the first numbers of credit card
    long long int validate = 100;

    //repeats the procedures
    for (long long int i = 100; i < CreditNumber; i *= 100)
    {
        ExtractDecimal *= 100;
        ExtractDecimal2 *= 100;
        DigitExtract = (CreditNumber % ExtractDecimal2) / ExtractDecimal;
        Digit = DigitExtract;
        if (Digit > 9)
        {
            int Digit1 = Digit;
            Digit = (Digit / 10);
            Digit =  Digit1 % 10;
        }
        res2 += Digit;
        validate *= 100;
        c++;
    }

    //executes the sum of the values ​​of the two previous sums
    int Sum = res + res2;

    //checks if the number of credit card is valid and returns your flag
    if (Sum % 10 == 0 && c >= 12)
    {
        if (CreditNumber / (validate / 100) >= 51 && CreditNumber / (validate / 100)  <= 55)
        {
            printf("MASTERCARD\n");
            Valid = true;
        }
        if (CreditNumber / (validate / 100) == 4 || CreditNumber / (validate / 10) == 4)
        {
            printf("VISA\n");
            Valid = true;
        }
        if (CreditNumber / (validate / 1000) == 34 || CreditNumber / (validate / 1000) == 37)
        {
            printf("AMEX\n");
            Valid = true;
        }
        if (Valid == false)
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    
}
