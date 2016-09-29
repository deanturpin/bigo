#include <iostream>
#include <iomanip>

namespace bigo {

	using namespace std;

	static unsigned int callCount = 0;

	unsigned int fibonacci(const unsigned int);
	unsigned int fibonacci(const unsigned int n) {

		++callCount;

		return (	
				n == 0 ? 0 :
				n == 1 ? 1 :
				n == 2 ? 1 :
				fibonacci(n - 1) + fibonacci(n - 2)
			   );
	}

	void generateSequence();
	void generateSequence() {
	
		for (unsigned int i = 0; i < 20; ++i) {

			// Clear call count
			callCount = 0;

			// Generate sequence
			fibonacci(i);

			cout << i << ",\t" << callCount << endl;
		}
	}
}

int main() {

	bigo::generateSequence();
	return 0;
}