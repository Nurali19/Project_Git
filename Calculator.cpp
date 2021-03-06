//a program that takes an operation followed by two operands and outputs the result
#include <iostream>
int main() {
    std::cout<<"Please enter your operation symbol(i.e. *,+,/,-) and two numbers: \n";
    int val1,val2;
    std::string operation;
    std::cin>>operation>>val1>>val2;
    if (operation=="*")
        std::cout<<val1<<" * "<<val2<<" = "<<val1*val2<<"\n";
    if (operation=="+")
        std::cout<<val1<<" + "<<val2<<" = "<<val1+val2<<"\n";
    if (operation=="-")
        std::cout<<val1<<" -"<<val2<<" = "<<val1-val2<<"\n";
    if (operation== "/")
        std::cout<<val1<<" / "<<val2<<" = "<<val1/val2<<"\n";
    if (operation =="%")
        std::cout<<val1<<" / "<<val2<<" = "<<val1/val2<<"\n";
    else
        std::cout<<"Input is invalid"<<std::endl;
    return 0;
}
