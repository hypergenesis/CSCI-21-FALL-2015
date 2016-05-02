#include <iostream>
#include <string>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int Biggest (int num_1, int num_2)
{
    if (num_1 > num_2)
    {
        return num_1;
    }
    else if (num_2 > num_1)
    {
        return num_2;
    }
}

int Biggest (int num_1, int num_2, int num_3)
{
    if (num_1 > num_2 && num_1 > num_3)
    {
        return num_1;
    }
    else if (num_2 > num_1 && num_2 > num_3)
    {
        return num_2;
    }
    else if (num_3 > num_1 && num_3 > num_2)
    {
        return num_3;
    }
}

void Swap (int& num_1, int& num_2)
{
    int num_temp;
    num_temp = num_1;
    num_1 = num_2;
    num_2 = num_temp;
}

int main()
{
    string name;
    
    cin.getline(name,50);
    cout<<name<<endl;
    
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    Swap(num1,num2);
    cout<<num1<<num2<<endl;
    return 0;
}