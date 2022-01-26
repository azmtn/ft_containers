#include "map.hpp"
#include "iterator.hpp"
#include "set.hpp"
#include "stack.hpp"
#include "utils.hpp"
#include "vector.hpp"
#include <map>
#include <vector>
#include <stack>
#include <set>


template <typename T>
void println(std::vector<T> a)
{
	std::vector<int>::iterator it = a.begin();
	std::cout  << "Vector:" << std::endl;
	while(it != a.end()) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

template <typename T>
void println(ft::vector<T> a)
{
	ft::vector<int>::iterator it = a.begin();
	std::cout << "My vector:" << std::endl;
	while(it != a.end()) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

int main() {

	//vector
	std::vector<int> vector;
	ft::vector<int> myVec;
	std::cout << "Vector size: " << vector.size() << std::endl;
	std::cout << "My vector size: " << myVec.size() << std::endl;

	std::vector<int> vector2 (10,20);
	println(vector2);
	ft::vector<int> myVec2 (10,20);
	println(myVec2);

	vector2.erase(vector2.end() - 1);
	println(vector2);
	myVec2.erase(myVec2.end() - 1);
	println(myVec2);

	std::cout << "Vector size: " << vector2.size() << " " << vector2.capacity() << std::endl;
	vector2.push_back(3);
	println(vector2);
	std::cout << "My vector size: " << myVec2.size() << " " << myVec2.capacity() << std::endl;
	myVec2.push_back(3);
	println(myVec2);

	std::cout << "Vector size: " << vector2.size() << std::endl;
	vector2.resize(15);
	std::cout << "Vector size: " << vector2.size() << " " << vector2.capacity() << std::endl;

	std::cout << "My vector size: " << myVec2.size() << std::endl;
	myVec2.resize(15);
	std::cout << "My vector size: " << myVec2.size() << " " << vector2.capacity() << std::endl;


	//stack
	ft::stack<int> first;
	ft::stack<int> second (myVec);
	ft::stack<int,ft::vector<int> > third;
	ft::stack<int,ft::vector<int> > six (myVec2);

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

	//map
	std::map<int, int> map2;
	map2[1] = 1;
	map2[2] = 2;
	map2[3] = 3;
	std::map<int, int>::iterator mapIt = map2.begin();
	std::cout << "Map:" << std::endl;
	while (mapIt != map2.end()) {
		std::cout << mapIt->second << " ";
		mapIt++;
	}
	ft::map<int, int> myMap;
	myMap[1] = 1;
	myMap[2] = 2;
	myMap[3] = 3;
	ft::map<int, int>::iterator myMapIt = myMap.begin();
	std::cout << " " << std::endl << "My map:" << std::endl;
	while (myMapIt != myMap.end()) {
		std::cout << myMapIt->second << " ";
		myMapIt++;
	}

	map2.erase(map2.begin());
	mapIt = map2.begin();
	std::cout << " " << std::endl << "Map erase" << std::endl;
	while (mapIt != map2.end()) {
		std::cout << mapIt->second << " ";
		mapIt++;
	}
	myMap.erase(myMap.begin());
	myMapIt = myMap.begin();
	std::cout << " " << std::endl << "My map erase:" << std::endl;
	while (myMapIt != myMap.end()) {
		std::cout << myMapIt->second << " ";
		myMapIt++;
	}

	map2.clear();
	myMap.clear();

	map2.insert(map2.begin(),std::make_pair(6,7));
	mapIt = map2.begin();
	std::cout << " " << std::endl << "Map insert:" << std::endl;
	while (mapIt != map2.end()) {
		std::cout << mapIt->second << " ";
		mapIt++;
	}
	myMap.insert(myMap.end(), ft::make_pair(6,7));
	myMapIt = myMap.begin();
	std::cout << " " << std::endl << "My map insert:" << std::endl;
	while (myMapIt != myMap.end()) {
		std::cout << myMapIt->second << " ";
		myMapIt++;
	}

	map2.insert(map2.begin(),std::make_pair(8,9));
	mapIt = map2.begin();
	std::cout << " " << std::endl << "Map insert:" << std::endl;
	while (mapIt != map2.end()) {
		std::cout << mapIt->second << " ";
		mapIt++;
	}
	myMap.insert(myMap.end(), ft::make_pair(8,9));
	myMapIt = myMap.begin();
	std::cout << " " << std::endl << "My map insert:" << std::endl;
	while (myMapIt != myMap.end()) {
		std::cout <<  myMapIt->second << " ";
		myMapIt++;
	}

	map2.insert(map2.begin(),std::make_pair(8,9));
	mapIt = map2.begin();
	std::cout << " " << std::endl << "Map re:" << std::endl;
	while (mapIt != map2.end()) {
		std::cout << mapIt->second << " ";
		mapIt++;
	}
	myMap.insert(myMap.end(), ft::make_pair(8,9));
	myMapIt = myMap.begin();
	std::cout << " " << std::endl << "My map re:" << std::endl;
	while (myMapIt != myMap.end()) {
		std::cout << myMapIt->second << " ";
		myMapIt++;
	}

	std::cout << std::endl << "Map size: " << map2.size() << std::endl;
	std::cout << "My map size: " << myMap.size() << std::endl;

	std::map<int, int> map3;
	map3[1] = 5;
	map3[2] = 5;
	map3[3] = 5;
	std::map<int, int>::iterator mapIt2 = map3.begin();
	std::cout << "Map2:" << std::endl;
	while (mapIt2 != map3.end()) {
		std::cout << mapIt2->second << " ";
		mapIt2++;
	}
	ft::map<int, int> myMap2;
	myMap2[1] = 9;
	myMap2[2] = 9;
	myMap2[3] = 9;
	ft::map<int, int>::iterator myMapIt2 = myMap2.begin();
	std::cout << std::endl << "My map2:" << std::endl;
	while (myMapIt2 != myMap2.end()) {
		std::cout << myMapIt2->second << " ";
		myMapIt2++;
	}

	ft::map<int, int> myMap3;
	myMap3[1] = 7;
	myMap3[2] = 7;
	myMap3[3] = 7;
	ft::map<int, int>::iterator myMapIt3 = myMap3.begin();
	std::cout << std::endl << "My map3:" << std::endl;
	while (myMapIt3 != myMap3.end()) {
		std::cout << myMapIt3->second << " ";
		myMapIt3++;
	}
	std::cout << std::endl << "swaping" << std::endl;
	myMap2.swap(myMap3);
	myMapIt2 = myMap2.begin();
	std::cout << "My map2:" << std::endl;
	while (myMapIt2 != myMap2.end()) {
		std::cout << myMapIt2->second << " ";
		myMapIt2++;
	}

	//set
	std::set<int> st;
	ft::set<int> mySt;
	std::cout << std::endl << "Set size: " << st.size() << std::endl;
	std::cout << "My set size: " << mySt.size() << std::endl;

	for (int i = 1; i < 10; i++) {
		int r = rand() % 15;
		st.insert(r);
		mySt.insert(r);
	}
	std::set<int> st2(st.begin(), st.end());
	ft::set<int> mySt2(mySt.begin(), mySt.end());
	std::cout << "Set size: " << st2.size() << std::endl;
	std::cout << "My set size: " << mySt2.size() << std::endl;
	std::cout << "Set:" << std::endl;
	for (std::set<int>::iterator it = st.begin(), ite = st.end(); it != ite; it++)
		std::cout << *it << " " ;
	std::cout << " " << std::endl;
	std::cout << "My set:" << std::endl;
	for (ft::set<int>::iterator myIt = mySt.begin(), ite = mySt.end(); myIt != ite; myIt++)
		std::cout << *myIt << " " ;

	st.erase((st.begin()));
	mySt.erase((mySt.begin()));
	std::cout << " " << std::endl << "Set:" << std::endl;
	for (std::set<int>::iterator it = st.begin(), ite = st.end(); it != ite; it++)
		std::cout << *it << " ";
	std::cout << " " << std::endl << "My set:" << std::endl;
	for (ft::set<int>::iterator mit = mySt.begin(), ite = mySt.end(); mit != ite; mit++)
		std::cout << *mit << " ";

	st2.clear();
	mySt2.clear();
	for (int i = 100; i < 105; i++) {
		st2.insert(i);
		mySt2.insert(i);
	}
	std::cout << " " << std::endl << "Set2:" << std::endl;
	for (std::set<int>::iterator it = st2.begin(), ite = st2.end(); it != ite; it++)
		std::cout << *it << " ";
	std::cout << " " << std::endl << "My set2:" << std::endl;
	for (ft::set<int>::iterator myit = mySt2.begin(), ite = mySt2.end(); myit != ite; myit++)
		std::cout << *myit << " ";
	st2.swap(st);
	mySt2.swap(mySt);
	std::cout << " " << std::endl << "Set2:" << std::endl;
	for (std::set<int>::iterator it = st2.begin(), ite = st2.end(); it != ite; it++)
		std::cout << *it << " ";
	std::cout << " " << std::endl << "My set2:" << std::endl;
	for (ft::set<int>::iterator mit = mySt2.begin(), ite = mySt2.end(); mit != ite; mit++)
		std::cout << *mit << " ";
	return 0;
}
