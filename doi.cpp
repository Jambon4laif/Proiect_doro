#include <iostream>
using namespace std;
#define size  100


class sort {
public:
	int list[size];
	int marime;

	sort(int list[size], int marime) {
		cout << "Constructor called.\n";
	};


	int print_list() {
		for (int i = 0; i < marime; i++) {
			cout << list[i] << endl;
		}
	}

	~sort() {
		cout << "Desctructor called\n";
	}

};
