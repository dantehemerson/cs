#include <bits/stdc++.h>

using namespace std;


int main() {

	double L, W; // width
	double areaTotal;
	double areaCirculo;
	double radio;
	
	int T;
	cin >> T;
	while(T--) {
		cin >> L;
		W = L * 0.6;
		areaTotal = L  * W;
		radio = L/5;
		areaCirculo = acos(-1) * pow(radio, 2);

		cout << fixed << setprecision(2) << areaCirculo << " " << (areaTotal - areaCirculo) << endl;
	}


	return 0;
}