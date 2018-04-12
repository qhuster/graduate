#include <fstream>
#include <stdlib.h>

using namespace std;

int main() {

	ofstream fout;
	fout.open("..\\out\\random.csv");

	for (size_t i = 0; i < 9; i++) {
		for (size_t j = 0; j < 9; j++) {
			int r = rand() % 400 + 35906;
			fout << r << ',';
		}
		fout << endl;
	}

	fout.close();

	return 0;
}
