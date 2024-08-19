#include "includes/command.hpp"
#include "includes/thuesdayDiscount.hpp"
#include "includes/packageReductionDiscount.hpp"
#include "includes/Colors.hpp"
#include <iostream>
#include <vector>
#include <utility>


int main(void) {

    // For simplicity's sake, everything is worth 10$

    std::vector<std::pair<std::string, int> > small_command;
    std::vector<std::pair<std::string, int> > big_command;

    small_command.push_back(std::make_pair("Rice", 3));
    small_command.push_back(std::make_pair("Olive oil", 1));
    small_command.push_back(std::make_pair("Soap", 2));
    // Should be worth 60$ by default

    Command small_command_default = Command(0, "Monday", "Bob", small_command);
    std::cout << YELLOW << "The default price for small command is: " << small_command_default.get_total_price() << RESET << std::endl;

    ThuesdayDiscount small_command_thuesday = ThuesdayDiscount(0, "Thuesday", "Bob", small_command);
    std::cout << YELLOW << "The price on thuesdays for small command is: " << small_command_thuesday.get_discounted_price() << RESET << std::endl;

    PackageReductionDiscount small_command_package = PackageReductionDiscount(0, "Monday", "Bob", small_command);
    std::cout << YELLOW << "The price for small command with package reduction is: " << small_command_package.get_discounted_price() << RESET << std::endl;

    big_command.push_back(std::make_pair("Noodles", 10));
    big_command.push_back(std::make_pair("Tomatoes", 10));
    big_command.push_back(std::make_pair("Ice cream", 10));
    // Should be worth 300$ by default

    Command big_command_default =  Command(0, "Monday", "Bob", big_command);
    std::cout << YELLOW << "The default price for big command is: " << big_command_default.get_total_price() << RESET << std::endl;

    ThuesdayDiscount big_command_thuesday = ThuesdayDiscount(0, "Thuesday", "Bob", big_command);
    std::cout << YELLOW << "The price on thuesdays for big command is: " << big_command_thuesday.get_discounted_price() << RESET << std::endl;

    PackageReductionDiscount big_command_package = PackageReductionDiscount(0, "Monday", "Bob", big_command);
    std::cout << YELLOW << "The price for big command with package reduction is: " << big_command_package.get_discounted_price() << RESET << std::endl;
}