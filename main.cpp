#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{
    std::ifstream file("name.txt");
    int a, b;
    char op;
    int result;
    file >> a >> op >> b;
    file.close();
    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '/') {
        result = a / b;
    } else {
        result = a * b;
    }
    std::ofstream output("result.txt");
    output << result << std::endl;
    output.close();
    return 0;
}
