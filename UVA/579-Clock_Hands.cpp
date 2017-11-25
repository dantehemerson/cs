#include <bits/stdc++.h>

using namespace std;

int main() {


	int H, M;
	char temp;// para leer los 2 puntos

	float horaAngulo;
	float minutoAngulo;
	float angulo;
	// Inicia desde el 00 a contar el angulo
	while(cin >> H >> temp >> M, H || M) {
		//cada hora tien un angulo de 30° 
		// y Le sumamos el angulo adicional para los 
		// minutos, como cada hora vale 30 y hay 60 minutos
		// Lo divido entre 2 para hallar el angulo aiicional
		horaAngulo = H * 30 + M * 0.5;
		minutoAngulo = M * 6; // cadaminuto vale 6°

		// calculamos el angulo
		angulo = (horaAngulo - minutoAngulo);

		angulo *= (angulo < 0 ? -1 : 1);
		if(angulo > 180) { // Si es mayor tomamos el otro angulo
			angulo = 360 - angulo;
		}
		cout << fixed << setprecision(3) << angulo << endl;

	}	

	return 0;
}