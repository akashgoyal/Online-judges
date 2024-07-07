/* Write a Generic Program to
swap two variables without using third variable.
It should be able to swap the data of either types::
Type : integer, character, float, string
*/
#include<iostream>
#include<string>
template <typename T>
T swap(T &a, T &b){
    a= a+b;
    b=a-b;
    a=a-b;
}

int main(){
    int choice;
    std::string str1,str2;
    std::cout<<"What you want to swap\n1. Characters\n2. Integers\n3. Floating Point numbers\n4. Strings\n";
    std::cin>>choice;
    switch(choice){
        case 1:
            char ch1,ch2;
            std::cout<<"Enter characters to be swapped ";
            std::cin >> ch1 >> ch2;
            swap(ch1,ch2);
            std::cout<<"After swap " << ch1 << " " << ch2<<"\n";
            break;
        case 2:
            int int1,int2;
            std::cout<<"Enter integers to be swapped ";
            std::cin >> int1 >> int2;
            swap(int1,int2);
            std::cout<<"After swap " << int1 << " " << int2<<"\n";
            break;
        case 3:
            float fl1,fl2;
            std::cout<<"Enter floating point numbers to be swapped ";
            std::cin >> fl1 >> fl2;
            swap(fl1,fl2);
            std::cout<<"After swap " << fl1 << " " << fl2<<"\n";
            break;
        case 4:
            std::cout<<"Enter Strings to be swapped ";
            std::cin >> str1 >> str2;
            swap(str1,str2);
            std::cout<<"After swap " << str1 << " " << str2<<"\n";
            break;
        default: std::cout<<"Wrong Choice entered\n"; break;
    }
return 0;
}
