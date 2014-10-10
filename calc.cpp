#include "calc.h"
#include <string>

int calc(int value1, int value2, char operatorSymbol){
	int result{0};
	switch (operatorSymbol){
	case '+': return value1 + value2;
	case '-': return value1 - value2;
	case '*': return value1 * value2;
	case '/': return value2!=0?value1/value2:-1;
	case '%': return value2!=0?value1%value2:-1;
	default: return -1;
	}
	return result;
}

int calc(std::istream& in){
	int value1{0}, value2{0};
	char operatorSymbol{};
	in >> value1 >> operatorSymbol >> value2;
	return calc(value1, value2, operatorSymbol);
}
