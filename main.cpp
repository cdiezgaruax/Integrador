#include <iostream>
#include <sstream>
#include <string>
#include "tiny_lisp.h"

int main() {
    std::string input;
    while (true) {
        std::cout << "Ingrese la operacion (salir o exit para salir): ";
        std::getline(std::cin, input);
        if (input == "salir" || input == "exit") break;
        try {
            std::stringstream ss(input);
            std::string expression;
            while (std::getline(ss, expression, ';')) {
                Tokens tokens = tokenize(expression);
                std::cout << evaluate(tokens) << std::endl;
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    return 0;
}