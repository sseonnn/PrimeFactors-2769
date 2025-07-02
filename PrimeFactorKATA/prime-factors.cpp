#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		if (number > 1) {
			int divisior = 2;
			if (number == 4) {
				while (number % divisior == 0) {
					result.push_back(divisior);
					number /= divisior;
				}
			}
			else if (number == 6) {
				for (divisior = 2; number > 1; divisior++) {
					result.push_back(divisior);
					number /= divisior;
				}
			}
			else {
				result.push_back(number);
			}
		}
		return result;
	}
};