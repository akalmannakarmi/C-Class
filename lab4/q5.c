// 5) WAP in c to enter marks in five subjects and calculate Total,Average,Percentage and Grade
// Total,Average,Percentage and Grade
//  Percentage>=90 "A"
//  Percentage>=80 "B"
//  Percentage>=70 "C"
//  Percentage>=60 "D"
//  Percentage<60 "F"

#include <stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5,total,average,percentage;
    char grade;
    printf("Marks in 5 Sub: ");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    total = sub1+sub2+sub3+sub4+sub5;
    average = total/5;
    percentage = total/500 *100;
    if (percentage>=90)
    {grade = 'A';}
    else if (percentage>=80)
    {grade = 'B';}
    else if (percentage>=70)
    {grade = 'C';}
    else if (percentage>=60)
    {grade = 'D';}
    else
    {grade = 'F';}
    printf("Total     :%.2f\n",total);
    printf("Average   :%.2f\n",average);
    printf("Percentage:%.2f\n",percentage);
    printf("Grade     :%c\n",grade);
    return 0;
}