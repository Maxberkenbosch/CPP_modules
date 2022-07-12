#include "Array.hpp"

int main(void)
{
    Array<int>          intArray;
    Array<std::string>  stringArray(6);
    Array<std::string>  secondStringArray;

    stringArray[0] = "first";
    stringArray[1] = "second";
    stringArray[2] = "third";
    stringArray[3] = "fourth";
    stringArray[4] = "fifth";

    for (int i = 0; i < stringArray.size(); i++)
        std::cout << stringArray[i] << std::endl;
    secondStringArray = stringArray;

    secondStringArray[2] = "THIRD";
    secondStringArray[4] = "FIFTH";
    for (int i = 0; i < secondStringArray.size(); i++)
        std::cout << secondStringArray[i] << std::endl;
        
    Array<std::string> thirdStringArray(secondStringArray);
    thirdStringArray[2] = "CHECKK";
    thirdStringArray[4] = "CHECKK";
    for (int i = 0; i < thirdStringArray.size(); i++)
        std::cout << thirdStringArray[i] << std::endl;

    try
    {
        thirdStringArray[-2] = "SHOULD GIVE ERROR";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        thirdStringArray[50] = "SHOULD GIVE ERROR";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}