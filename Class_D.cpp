#include <iostream>

class D
{
private:
    int D1;
    int D2;
public:
    D();
    ~D();
    
    void set_D1(int D) { this->D1 = D; };
    void set_D2(int D) { this->D2 = D; };

    int get_D1() { return this->D1; };
    int get_D2() { return this->D2; }

    void MD1() { std::cout << "MD1\n"; };
    void MD2() { std::cout << "MD2\n"; };
    void MD3() { std::cout << "MD3\n"; };
    
    void MD4() { std::cout << "MD4\n"; };
};

int main() {
    return 0;
}
