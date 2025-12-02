#include <iostream>

int main() {
    long long N; 
    std::cin >> N;

    double* p = nullptr;     
    double** pp = nullptr;  ь

    p = new double(N);      
    pp = &p;                 

    std::cout << **pp << std::endl;  

    delete p;               
    p = nullptr;             
    pp = nullptr;           

    return 0;
}