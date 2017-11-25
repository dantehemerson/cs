#include <bits/stdc++.h>

using namespace std;

int main() {

	string commands;
	int n, pointer, caseCounter = 1;
	int A[100];

	cin >> n;
	while(n--) {
		cin >> commands;
		pointer = 0;
		memset(A, 0, sizeof A);
		for(int i = 0; i < commands.size(); i++) {
			switch(commands[i]) {
				case '<':
					pointer = (pointer + 99) % 100;
					break;
				case '>':
					pointer = (pointer + 1) % 100;
					break;
				case '+':
					A[pointer] = (A[pointer] + 1) % 256;
					break;
				case '-':
					A[pointer] = (A[pointer] + 255) % 256;
					break;
			}			
		}

		cout << "Case " << caseCounter++ << ":";
		/* Mostrar en hexadecimal */
		for(int i = 0; i < 100; i++) {
			cout << " " << hex << uppercase << setfill('0') << setw(2) << A[i];
		}
	}

	return 0;
}



/*
1
..++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+.
*/