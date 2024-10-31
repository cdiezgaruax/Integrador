#ifndef TINY_LISP_H
#define TINY_LISP_H

#include <vector>
#include <string>
#include <unordered_map>
#include <functional>

typedef std::vector<std::string> Tokens;

Tokens tokenize(const std::string& input);
double evaluate(Tokens& tokens, std::unordered_map<std::string, double> localVariables = {});

extern std::unordered_map<std::string, std::function<double(std::vector<double>)>> functionTable;
extern std::unordered_map<std::string, double> symbolTable;

#endif // TINY_LISP_H