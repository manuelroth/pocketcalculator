#include "sevensegment.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using digit=std::vector<std::vector<std::string>>;
const digit digits = {{" - \n", "| |\n", "   \n", "| |\n", " - "},
      	  	  	  	  {"   \n", "  |\n", "   \n", "  |\n", "   "},
      	  	  	  	  {" - \n", "  |\n", " - \n", "|  \n", " - "},
         	 	 	  {" - \n", "  |\n", " - \n", "  |\n", " - "},
      	  	  	  	  {"   \n", "| |\n", " - \n", "  |\n", "   "},
      	  	  	  	  {" - \n", "|  \n", " - \n", "  |\n", " - "},
      	  	  	  	  {" - \n", "|  \n", " - \n", "| |\n", " - "},
      	  	  	  	  {" - \n", "  |\n", "   \n", "  |\n", "   "},
      	  	  	  	  {" - \n", "| |\n", " - \n", "| |\n", " - "},
      	  	  	  	  {" - \n", "| |\n", " - \n", "  |\n", " - "}};

void printLargeNumber(unsigned int number, std::ostream &out){
	std::string numberString{std::to_string(number)};
	std::for_each(numberString.begin(),numberString.end(),[&out](int x){
		int digit{x-48};
		printLargeDigit(digit, out);
	});
}

void printLargeDigit(unsigned int digit, std::ostream &out){
	std::ostream_iterator<std::string const> os{out};
	std::copy(digits.at(digit).cbegin(), digits.at(digit).cend(), os);
}



