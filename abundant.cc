#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int N;
	if (argc < 2) {
		cout << "Abundant numbers:";
		cin >> N;
	}
	else
		N=atof(argv[1]);
	int n = 0;
	int divisor;
	int divisorsum = 0;
	int i=1;

	while (n<N) {
		for (divisor = 1; divisor < i; divisor++) {
			if (i % divisor == 0) {
				divisorsum = divisorsum + divisor;
			}
		}
		if (divisorsum > i) {
			cout << i;
			cout << "\n";
			n++;
		}
		divisorsum = 0;
		i++;
	}
	return 0;
}