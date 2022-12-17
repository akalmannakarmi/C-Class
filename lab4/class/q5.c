// 5) WAP in c to enter marks in five subjects and calculate
// Total,Average,Percentage and Grade
//  Percentage>=90 "A"
//  Percentage>=80 "B"
//  Percentage>=70 "C"
//  Percentage>=60 "D"
//  Percentage<60 "F"

#include <stdio.h>

char calcGrade(float percentage){
    if (percentage>=90)
    {return 'A';}
    else if (percentage>=80)
    {return 'B';}
    else if (percentage>=70)
    {return 'C';}
    else if (percentage>=60)
    {return 'D';}
    else
    {return 'F';}
}

int main(){
    float subs[5];
    float total=0,average=0,percentage=0;
    char grade;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks: ");
        scanf("%f",&subs[i]);
        total = total+subs[i];
    }
    average = total/5;
    percentage = total/500 *100;
    grade = calcGrade(percentage);
    printf("Total     :%.2f\n",total);
    printf("Average   :%.2f\n",average);
    printf("Percentage:%.2f\n",percentage);
    printf("Grade     :%c\n",grade);
    return 0;
}