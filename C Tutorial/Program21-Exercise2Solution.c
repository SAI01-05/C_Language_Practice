#include<stdio.h>

// It does not giving and output

int main()
{
    char input;
    float KmsMiles= 0.621371;
    float InchesFoot= 0.083333;
    float CmsInches= 0.393701;
    float PoundKgs= 0.453592;
    float InchesMeters= 0.0252;
    float first,second;


    while (1)
    {
        printf("Enter the input character.Q to quit\n 1.KmsMiles\n  2.Inches To Foot\n 3.Cms To Inches\n 4.Pound To Kgs\n 5.Inches To Meters\n");scanf("%c",&input);
                    

        switch (input)
        {
        case 'q':
            printf("Quitting the program...\n");
            goto End;
            break;

        case '1':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first *KmsMiles;
        printf("%.2f Kms is equal to %.2f Miles \n\n\n",first,second);
        break;


        case '2':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first *InchesFoot;
        printf("%f Inches is equal to %f Foot \n",first,second);
        break;



        case '3':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first *CmsInches;
        printf("%f Cms is equal to %f Inches \n",first,second);
        break;



        case '4':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first *PoundKgs;
        printf("%f Pound is equal to %f Kgs \n",first,second);
        break;



        case '5':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first *InchesMeters;
        printf("%f Inches is equal to %f Meters \n",first,second);
        break;

        
        default:
        printf("In default now\n\n");
            break;
        }       
    }
    End:
    

    return 0;

}