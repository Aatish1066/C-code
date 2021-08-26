// Created by Aatish on 19-08-2021.
#include <stdio.h>

struct StudentRecords {
    char strName;       //name of student
    int iRollNumber;  //roll no of student
    float fMarks;      //marks of student
}Student[25];         //structure in use


void outputRecord (int iNo) {

    printf(" %c\n", Student[iNo].strName);       //output via function
    printf(" %d\n", Student[iNo].iRollNumber);
    printf(" %f\n", Student[iNo].fMarks);
}


void InputRecord (int iNo) {

    scanf("\nEnter Name %s", &Student[iNo].strName);       //input via function
    scanf("\nEnter RollNumber %d", &Student[iNo].iRollNumber);
    scanf("\nEnter marks %f", &Student[iNo].fMarks);
}

void InputRecord (int);          //function prototyping
void outputRecord (int);

int main () {
    int iCount;                                    //no of students
    for (iCount = 0 ; iCount < 25 ; ++iCount) {     //entry of records
        InputRecord(iCount);
    }
    for (iCount = 0 ; iCount < 25 ; ++iCount) {      //displaying of records
        outputRecord(iCount);
    }
    return 0;
}
