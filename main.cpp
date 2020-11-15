#include <iostream>


int main()
{
    double age, mass, height, BMI;
    std::cout << "Welcome to the Body Mass Index program!" << std::endl;
    std::cout << "Please enter your weight(KG) and height(m): ";
    std::cin >> mass >> height;
    BMI = mass / (height * height);
    std::cout << "Your Body Mass Index is " << BMI << std::endl;

    std::cout << "Enter your age (18 and up): ";
    std::cin >> age;
    if(18 <= age < 25)
    {
        if(BMI < 19)
            std::cout << "You're too skinny!";
        else if(BMI > 24)
            std::cout << "You're too weighty!";
        else
            std::cout << "Your BMI is ideal.";
    }
    else if(25 <= age < 35)
    {
        if(BMI < 20)
            std::cout << "You're too skinny!";
        else if(BMI > 25)
            std::cout << "You're too weighty!";
        else
            std::cout << "Your BMI is ideal.";
    }
    else if(35 <= age < 45)
    {
        if(BMI < 21)
            std::cout << "You're too skinny!";
        else if(BMI > 26)
            std::cout << "You're too weighty!";
        else
            std::cout << "Your BMI is ideal.";
    }
    else if(45 <= age < 55)
    {
        if(BMI < 22)
            std::cout << "You're too skinny!";
        else if(BMI > 27)
            std::cout << "You're too weighty!";
        else
            std::cout << "Your BMI is ideal.";
    }
    else if(55 <= age < 65)
    {
        if(23 < BMI)
            std::cout << "You're too skinny!";
        else if(BMI > 28)
            std::cout << "You're too weighty!";
        else
            std::cout << "Your BMI is ideal.";
    }
    else if(age >= 65)
    {
        if (BMI < 24)
            std::cout << "You're too skinny!";
        else if(BMI > 29)
            std::cout << "You're too weighty!";
        else
            std::cout << "Your BMI is ideal.";
    }
    else
        std::cout << "Wrong input!";

        return 0;
}
