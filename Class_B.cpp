#include <iostream>

class B
{
private:
    int B1;
    float B2;
public:
    B();
    ~B();
    
    void set_B1(int B) { this->B1 = B; };
    void set_B2(float B) { this->B2 = B; };

    int get_B1() { return this->B1; };
    float get_B2() { return this->B2; }

    void MB1() { std::cout << "MB1\n"; };
    void MB2() { std::cout << "MB2\n"; };
    void MB3() { std::cout << "MB3\n"; };
};

int main() {
    return 0;
}