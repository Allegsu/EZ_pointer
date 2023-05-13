#include <iostream>
#include <stdio.h> 

void calculate_average(float *, int);

int main()
{
    int x=0;
    float *num;
    std::cout << "Type the [amount] of numbers to calculate:\n ";
    std::cin >> x;


    for(int i = 0; i < x; i++)
    {
        std::cout << "Type the number:\t" << i+1 << std::endl;
        std::cin >> num[i];
    }

    calculate_average(num, x);

    return 0;
}

void calculate_average(float *num, int x)
{
    float plus = 0;

    for(int i = 0; i < x; i++)
    {
        plus += *(num + i);
    }

    float aver = plus / x;
    std::cout << "Average is: " << aver << std::endl;
}