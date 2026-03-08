#include <iostream>
using namespace std;

float calculateTotal(float m1, float m2, float m3, float m4, float m5) 
{
    return m1 + m2 + m3 + m4 + m5;
}

float calculatePercentage(float total) 
{
    return total / 5;
}

char calculateGrade(float per) 
{
    if(per >= 90) return 'A';
    else if(per >= 75) return 'B';
    else if(per >= 60) return 'C';
    else if(per >= 50) return 'D';
    else return 'F';
}

int main() {

    float m1,m2,m3,m4,m5;

    cout<<"Enter marks of 5 subjects\n";
    cin>>m1>>m2>>m3>>m4>>m5;

    float total = calculateTotal(m1,m2,m3,m4,m5);
    float percentage = calculatePercentage(total);
    char grade = calculateGrade(percentage);

    cout<<"Total Marks = "<<total<<endl;
    cout<<"Percentage = "<<percentage<<"%"<<endl;
    cout<<"Grade = "<<grade<<endl;

    return 0;
}
