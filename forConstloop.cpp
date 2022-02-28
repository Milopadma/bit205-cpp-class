#include <iostream>
using namespace std;
int main() {
    string texts[] = {"Apple", "Banana", "Orange"};
    
    for(const auto& text : texts) {
        std::cout << text << std::endl;
    }
}