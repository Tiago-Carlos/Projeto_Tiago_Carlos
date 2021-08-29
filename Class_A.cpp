#include <iostream>

class A
{
private:
    int A1;
    float A2;
public:
    A();
    ~A();
    
    void set_A1(int A) { this->A1 = A; };
    void set_A2(float A) { this->A2 = A; };

    int get_A1() { return this->A1; };
    float get_A2() { return this->A2; }

    void MA1() { std::cout << "MA1\n"; };
    void MA2() { std::cout << "MA2\n"; };
    void MA3() { std::cout << "Alteração da classe A a partir do clone"; };
};

int main() {
    return 0;
}