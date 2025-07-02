#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};

		for (int divisior = 2; number > 1; divisior++) {
			while (number % divisior == 0) {
				result.push_back(divisior);
				number /= divisior;
			}
		}
		return result;
	}
};