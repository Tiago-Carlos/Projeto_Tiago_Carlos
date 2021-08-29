#include <iostream>

class C
{
private:
    std::string C1;
    int C2;
public:
    C();
    ~C();
    
    void set_C1(std::string C) { this->C1 = C; };
    void set_C2(int C) { this->C2 = C; };

    std::string get_C1() { return this->C1; };
    int get_C2() { return this->C2; }

    void MC1() { std::cout << "MC1\n"; };
    void MC2() { std::cout << "MC2\n"; };
    void MC3() { std::cout << "MC3\n"; };
};

int main() {
    return 0;
}