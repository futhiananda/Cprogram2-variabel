#include <iostream>
using namespace std;
int main(){
	const int MAX_SCORE = 100;
	cout << "Nilai maksimal: " <<MAX_SCORE << endl; // MAX_SCORE = 90; // ini akan menyebabkan error, karena MAX_SCORE adalah konstan
	return 0;
}
