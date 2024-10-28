#include <iostream>
#include <string>

using namespace std;


bool isDivisibleBy11(const string &num) {
    int oddSum = 0, evenSum = 0;
    for (size_t i = 0; i < num.size(); ++i) {
        if (i % 2 == 0) {
            oddSum += num[i] - '0';
        } else {
            evenSum += num[i] - '0';
        }
    }
    return (oddSum - evenSum) % 11 == 0;
}

string findSmallestNumber(int n) {
    if (n == 1) return "-1"; 

    string number(n, '3');
    number[n - 1] = '6'; 

    while (true) {
        
        if (isDivisibleBy11(number)) {
            return number; 
        }

        
        int i = n - 2; 
        while (i >= 0) {
            if (number[i] == '3') {
                number[i] = '6'; 
                break;
            } else {
                number[i] = '3'; 
                --i;
            }
        }
        if (i < 0) break; 
    }

    return "-1"; 
}

int main() {
	int t; cin >> t; 
	while(t--){
		int n;
	    cin >> n;
	    cout << findSmallestNumber(n) << endl;
	}
    return 0;
}
