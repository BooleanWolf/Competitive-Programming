#include <bits/stdc++.h>
using namespace std;

int PAIR() {
	// Declaration
	pair<int, double> p1;

	// Initialization using make_pair
	pair<int, double> p2 = make_pair(1, 2.5);

	// Accessing elements
	cout << "p2.first: " << p2.first << ", p2.second: " << p2.second << '\n';

	// Swapping two pairs
	pair<int, double> p3 = make_pair(42, 3.14);
	swap(p2, p3);
	cout << "After swapping: p2.first: " << p2.first << ", p2.second: " << p2.second << '\n';
	cout << "After swapping: p3.first: " << p3.first << ", p3.second: " << p3.second << '\n';

	// Array of pairs
	pair<int, int> points[3];
	points[0] = make_pair(10, 20);
	points[1] = make_pair(30, 40);
	points[2] = make_pair(50, 60);

	// Pair of pairs
	pair<pair<int, int>, int> x = make_pair(make_pair(0, 1), 2);
	cout << "x.first.first: " << x.first.first << ", x.first.second: " << x.first.second << ", x.second: " << x.second << '\n';

	// Structured binding (C++17 or above)
  	p1 = make_pair(10, 20);
	auto [first_element, second_element] = p1;
	cout << "p1.first: " << first_element << ", p1.second: " << second_element << '\n';

	// Using tie to access the elements of a pair
	int x_val; double y_val;
	tie(x_val, y_val) = p2;
	cout << "x_val: " << x_val << ", y_val: " << y_val << '\n';

	return 0;
}


int TUPLE() {
  // Declaration
  tuple<int, double, char> t1;

  // Initialization using make_tuple
  tuple<int, double, char> t2 = make_tuple(42, 3.14, 'A');

  // Accessing elements
  cout << "get<0>(t2): " << get<0>(t2) << ", get<1>(t2): " << get<1>(t2) << ", get<2>(t2): " << get<2>(t2) << '\n';

  // Using structured binding (C++17 or above)
  t1 = make_tuple(10, 2.718, 'X');
  auto [first_element, second_element, third_element] = t1;
  cout << "get<0>(t1): " << first_element << ", get<1>(t1): " << second_element << ", get<2>(t1): " << third_element << '\n';

  // Using tie to access the elements of a tuple
  int x;
  double y;
  char z;
  tie(x, y, z) = t2;
  cout << "x: " << x << ", y: " << y << ", z: " << z << '\n';

  // tuples of pairs
  tuple<pair<int, int>, int, tuple<int, int>> t3 = make_tuple(make_pair(0, 1), 2, make_tuple(3, 4));
  cout << get<0>(t3).first << ' ' << get<0>(t3).second << ' ' << get<1>(t3) << ' ' << get<0>(get<2>(t3)) << ' ' << get<1>(get<2>(t3)) << '\n';
  return 0;
}


