#include <iomanip>
#include <iostream>

int main() {
    const double risePerYear = 1.5;
    const int year5 = 5;
    const int year7 = 7;
    const int year10 = 10;
     double after5Years = risePerYear * year5;
     double after7Years = risePerYear * year7;
     double after10Years = risePerYear * year10;
    
    
    std::cout << "Ocean level rise after " << year5 << " years: "
              << after5Years << " millimeters\n";
    std::cout << "Ocean level rise after " << year7 << " years: "
              << after7Years << " millimeters\n";
    std::cout << "Ocean level rise after " << year10 << " years: "
              << after10Years << " millimeters\n";
    return 0;
}