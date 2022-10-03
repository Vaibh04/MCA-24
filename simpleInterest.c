#include<stdio.h>
//Name: Vaibhav Mawari
//Course: MCA
//Program Name: 1st Program
int main(){
    printf("My Name: Vaibhav Mawari\nCourse: MCA\nProgram Name: 1st Program\n");
    
    float p,r,t,SI;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f%f%f",&p,&r,&t);
    SI=(p*r*t)/100; //Assignment operator
    printf("\nThe Simple Interest is %f",SI);
    return 0;
}
