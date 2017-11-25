#include <bits/stdc++.h>

using namespace std;

int main() {

	int H; // H == 0, fin ALTURA
	int U; // Distancia que escala durante el día
	int D; // Distancia que se desliza en la nche
	int F; // Factor de fatiga
	// <0

	float height;
	float fatiga;
	float arribaDistancia;
	int dayCounter;
	while(cin >> H >> U >> D >> F, H) {
		fatiga = F/100.0 * U;
		arribaDistancia = U;
		height = 0;
		dayCounter = 1;

		while(true) {
			height += arribaDistancia;
			//cout << "Day " << dayCounter << " " << height << " " << arribaDistancia << endl;
			if(height > H) break;
			
			height -= D;
			if(height < 0) break;

			arribaDistancia -= fatiga;
			// No puede tener una subida negativa
			if(arribaDistancia < 0) arribaDistancia = 0;
			dayCounter++;			
		}

		if(height >= 0) {
			cout << "success on day ";
		}
		else{
			cout << "failure on day ";			
		}
		cout << dayCounter << endl;
	}


	return 0;
}