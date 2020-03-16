#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; // Participantes
	int B; // Presupuesto
	int H; // Numero de hoteles a considerar
	int W; // Numero de semanas a elejir
	int p; // Precio de cada persona que se queda el fin de semana en  el hotel
	int a; // numero de camas de cada semana
	int mayorA;
	int menorPrecio;
	int precio;
	while(cin >> N >> B >> H >> W) {
		menorPrecio = 1e9;
		//cout << menorPrecio << endl;
		while(H--) {
			cin >> p;
			mayorA = 0;
			for(int i = 0; i < W; i++) {
				cin >> a;
				if(a > mayorA) mayorA = a;				
			}					
			if(mayorA >= N) { // Hay habitaciones para todos
				// Calcula el precio
				precio = N * p; // Numero de alumnos x precio por persona
				if(precio < menorPrecio) {
					menorPrecio = precio;
				}
			}
		}


		if(B >= menorPrecio) { // Si alcanza el presupuesto (B)
			cout << menorPrecio << endl;
		}
		else {
			cout << "stay home" << endl;
		}		
	}

	return 0;
}