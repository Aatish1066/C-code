#include <stdio.h>


int binary_to_decimal();      //prototyping of functions
int addn_n_no();
int max_min();
int reverse_print();
int check_prime();
int type_check();

int main() {
    printf("enter your choice\n");   // displaying options via printf
    printf("1) Binary equivalent of a decimal number\n2) Addition of n numbers\n3) Smallest and largest among n numbers\n");
    printf("4) Reverse digits of a number\n5) Whether a number is prime\n6) Whether a number is integer or float\n7)exit\n");
    int iDecsion;
    scanf("%d", &iDecsion);          // retreving user decsion
    switch (iDecsion) {                        // checking user selection for the match in options
        case 1:
            binary_to_decimal();
            break;
        case 2:
            addn_n_no();
            break;
        case 3:
            max_min();
            break;
        case 4:
            reverse_print();
            break;
        case 5:
            check_prime();
            break;
        case 6:
            type_check();
            break;
        default:
            printf("error");
    }
    return 0;
}


int binary_to_decimal() {                               //function for binary to decimal conversions
    int iDec;
    int iBin[10];
    printf("enter the decimal number\n");
    scanf("%d", &iDec);
    for (int i = 0; iDec > 0; i++) {
        iBin[i] = iDec % 2;
        iDec = iDec / 2;
    }
    printf("binary of given number is\n");

    for (int i = 10; i >= 0; i--) {
        printf("%d", iBin[i]);
    }
    return 0;
}

int addn_n_no() {                                    // function for add n numbers
    int iAddNo, iSum = 0;
    printf("enter the number of addition to be performed");
    scanf("%d", &iAddNo);
    for (int i = 0; i < iAddNo; ++i) {
        int iReq;
        scanf("%d", &iReq);
        iSum = iSum + iReq;
    }
    printf("the sum is\n%d", iSum);
    return 0;
}

int max_min() {                                       //function for maximum minimum determinaion
    int iSampleSet;
    int iSet[10];
    printf("enter the size of sample set");
    scanf("%d", &iSampleSet);
    for (int i = 0; i < iSampleSet; ++i) {
        scanf("%d", &iSet[i]);

    }
    int      iMax, iMin;
    for (int i = 0; i < iSampleSet; ++i) {


        if (iMax < iSet[i + 1]) {
            iMax = iSet[i + 1];
        }
        if (iMin > iSet[i + 1]) {
            iMin = iSet[i + 1];
        }

    }
    printf("%d", iMax);
    printf("%d", iMin);
    return 0;
}

int reverse_print() {                                  //function for reverse printing
    int iSampleSet;
    int iSet[10];
    printf("enter the size of numbers");
    scanf("%d", &iSampleSet);
    for (int i = 0; i < iSampleSet; ++i) {
        scanf("%d", &iSet[i]);

    }
    for (int i = iSampleSet; i > 0; ++i) {
        printf("%d", iSet[i]);
    }
    return 0;
}

int check_prime() {                                            //function for checking prime numbers
    printf("enter the number");
    int iNo;
    scanf("%d", &iNo);
    for (int i = 2; i < iNo; ++i) {
        if (iNo % i == 0) {
            printf("not prime number");
            break;
        } else printf("it is prime number");

    }
    return 0;
}

int type_check() {                                                 //function for checking the type of entrered cNumber

        char cNumber[10];
        int iFlag = 0;
        int  i = 0;

        printf("\n\nEnter a cNumber: ");
        scanf("%s", cNumber);
        while(cNumber[i++] != '\0')    
        {
            if(cNumber[i] == '.')    // decimal point is present
            {
                iFlag = 1;
                break;
            }
        }

       
        if(iFlag==1)
            printf("\n\tEntered Number is a Floating point Number\n");
        else
            printf("\n\tEntered Number is a integer Number\n");

        return 0;
    }



