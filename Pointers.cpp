#include<bits/stdc++.h>
using namespace std;

int32_t pointer() {

	int num = 10;
	cout << &num << '\n'; // Output: 0x16d10a7f4 (address of 'num', which may vary on your machine)
	int* ptr; // Declaration of a pointer that can store the address of an integer variable
	ptr = &num; // Storing the address of 'num' in 'ptr'
	
	cout << *ptr << '\n'; // Output: 10 (value at the memory location pointed by 'ptr')
	// The `*ptr` dereferences the pointer `ptr`, giving you access to the value stored at the memory location it points to.
	
	*ptr = 69; // Modifying the value at the memory location pointed by 'ptr'
	
	cout << *ptr << '\n'; // Output: 69 (value at the memory location pointed by 'ptr')
	cout << num << '\n'; // Output: 69 (value of 'num' after modification)
	
	int* ptr1 = nullptr; // Declaration of a null pointer
	int* ptr2 = NULL; // Declaration of a null pointer
	
	cout << ptr1 << '\n'; // Output: 0 (null pointer)
	
	int a[] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++) {
		cout << &a[i] << '\n'; // consecutive memory locations each of size 4 bytes
	}
	
	int* ptr; // Declaration of a pointer that can store the address of an integer variable
	ptr = a; // Storing the address of the first element of 'a' in 'ptr'
	int* ptr2 = &a[0]; // Initialization of the pointer with the address of the first element of 'a', same as above
	
	cout << *(ptr + 3) << '\n'; // Output: 4 (value at the memory location pointed by 'ptr + 3'
	
	ptr++; // Incrementing the pointer to point to the next element
	
	cout << *ptr << '\n'; // Output: 2 (value at the updated memory location pointed by 'ptr')
	
	ptr = ptr - 1; // Decrementing the pointer to point to the previous element
	cout << *ptr << '\n'; // Output: 1 (value at the updated memory location pointed by 'ptr')
	
	*ptr = *ptr + 5; // Incrementing the value at the memory location pointed by 'ptr' by 5
	cout << *ptr << '\n'; // Output: 6 (value at the updated memory location pointed by 'ptr')
	
	cout << ptr[4] << '\n'; // Output: 5 (same as *(ptr + 4), value at the memory location pointed by 'ptr + 4')
	
	int num = 10;
	int& ref = num; // Initialization of a reference variable
	cout << ref << '\n'; // Output: 10 (value of 'num')
	cout << &num << ' ' << &ref << '\n'; // Output: 0x16d10a7f4 0x16d10a7f4 (same address)
	
	ref += 5; // Increment reference variable by 5
	cout << num << ' ' << ref << '\n'; // Output: 15 15 (changes reflected in 'num' as well)
	
	num += 5; // Increment 'num' by 5
	cout << num << ' ' << ref << '\n'; // Output: 20 20 (changes reflected in 'ref' as well)
	
}

// Passing Arrays to function 



void add1(int *a) { // pointer to the first element of the array
  for (int i = 0; i < 5; i++) {
    a[i]++; // incrementing the value at the memory location pointed by 'a + i'
    // same as *(a + i) = *(a + i) + 1
  }
}

void add2(int a[5]) { // same as 'int *a', it basically decays into a pointer to its first element
  for (int i = 0; i < 5; i++) {
    a[i]++;
  }
}

void add3(int a[]) { // same as 'int *a', it basically decays into a pointer to its first element
  for (int i = 0; i < 5; i++) {
    a[i]++;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a[] = {1, 2, 3, 4, 5};
  add1(a);
  for (int i = 0; i < 5; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n'; // Output: 2 3 4 5 6

  add2(a);
  for (int i = 0; i < 5; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n'; // Output: 3 4 5 6 7

  add3(a);
  for (int i = 0; i < 5; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n'; // Output: 4 5 6 7 8

  return 0;
}

























