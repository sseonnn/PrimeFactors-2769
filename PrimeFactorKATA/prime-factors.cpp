#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		if (number > 1) {
			int divisior = 2;
			if (number == 4 || number == 6 || number == 9) {
				for (divisior = 2; number > 1; divisior++) {
					while (number % divisior == 0) {
						result.push_back(divisior);
						number /= divisior;
					}
				}
			}
			else {
				result.push_back(number);
			}
		}
		return result;
	}
};