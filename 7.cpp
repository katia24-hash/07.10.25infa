#include <iostream>
#include <iomanip>
#include <string>

int main() {
    int n;
    std::cin >> n;

    double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
    std::string surname, name;
    int a, b, c;

    for (int i = 0; i < n; ++i) {
        std::cin >> surname >> name >> a >> b >> c;
        sum1 += a;
        sum2 += b;
        sum3 += c;
    }

    double avg1 = sum1 / n;
    double avg2 = sum2 / n;
    double avg3 = sum3 / n;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << avg1 << " " << avg2 << " " << avg3 << std::endl;

    return 0;
}