#include <bits/stdc++.h>

#define OK 10

using namespace std;

int main() {

	int k; // N° Cursos que ha elejido
	int m; // N° Categorias

	// Cada Categoría
	int c; // Numero de cursos en la categoría
	int r; // Numero mínimo de cursos de la categoría que debe tomarse
	// C cursos de 

	int input_course;
	bool yes;

	while(cin >> k, k) {
		cin >> m;

		map<int, int> courses;		
		while(k--){
			cin >> input_course;
			courses[input_course] = OK;
		}

		yes = true;
		while(m--) {
			cin >> c >> r;			
			int counter = 0;
			while(c--) {
				cin>> input_course;
				if(courses[input_course] == OK) {
					counter++;
				}
			}
			if(counter < r) {
				yes = false;
			}
		}

		cout << (yes ? "yes" : "no") << endl;
	}




	return 0;
}