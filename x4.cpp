
#include <iostream>
using namespace std;

int main() 
{
float GPA;
int Financial_condition;

cout <<"Enter the GPA\n";
cin >> GPA;

cout <<"Enter the Fainancial need\n";
cin >> Financial_condition;

if (GPA >= 3.5 && Financial_condition >= 50000)
{
cout << "The student is eligible\n";
}
else
{
cout << "The student is not eligible\n";
}

    return 0;
}
