#include <iostream>
#include "stack.hpp"
#include <stack>
#include <vector>

int main() {
	std::vector<int> vector;
	std::vector<int> myVec;


	ft::stack<int> first;
	ft::stack<int> second (myVec);
	ft::stack<int,std::vector<int> > third;
	ft::stack<int,std::vector<int> > six (myVec);

	std::cout << "size of first: " << first.size() << '\n';
	std::cout << "size of second: " << second.size() << '\n';
	std::cout << "size of third: " << third.size() << '\n';
	std::cout << "size of six: " << six.size() << '\n';
	first.push(10);
	first.push(20);
	std::cout << "first top is: " << first.top() << '\n';
	first.pop();
	std::cout << "first top is: " << first.top() << '\n';

	if (first==six) std::cout << "first and six are equal\n";
	if (first!=six) std::cout << "first and six are not equal\n";
	if (first< six) std::cout << "first is less than six\n";
	if (first> six) std::cout << "first is greater than six\n";
	if (first<=six) std::cout << "first is less than or equal to six\n";
	if (first>=six) std::cout << "first is greater than or equal to six\n";
	return 0;
}
