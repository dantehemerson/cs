#include <bits/stdc++.h>

using namespace std;

char BMP[255][255];
int M, N;

inline bool inbound(int x, int y) {
    bool isX = (0<x && x<=M);
    bool isY = (0<y && y<=N);
    return isX && isY;
}

void fill_region() {
    int vx[]= {1,-1,0,0}, vy[]= {0,0,1,-1};

    int x, y;
    char color;
    scanf("%d %d %c", &x, &y, &color);

    char region_color = BMP[x][y];

    queue<pair<int, int> > coada;
    coada.push(make_pair(x,y));
    BMP[x][y] = color;

    while(!coada.empty()) {
        x = coada.front().first;
        y = coada.front().second;
        coada.pop();

        for(int i=0; i<4; i++) {
            int xx = x + vx[i];
            int yy = y + vy[i];
            if (inbound(xx,yy) && BMP[xx][yy] == region_color) {
                coada.push(make_pair(xx,yy));
                BMP[xx][yy] = color;
            }
        }

        //debug();
    }
}

int main() {

	

	// parameters
	int a, b, c, d;
	char z, y, x;
	string filename;
	char command;

	while(cin >> command, command != 'X') {
		switch(command) {
			case 'I':
				cin >> M >> N;
				std::fill(BMP[0], BMP[254] + 255, '0');
				break;
			case 'C':
				std::fill(BMP[0], BMP[254] + 255, '0');
				break;
			case 'L':
				cin >> a >> b >> z;					
				BMP[a][b] = z;
				break;
			case 'V':
				cin >> a >>  b >> c >> z;
				for(int i = b; i <= c; i++) {
					BMP[a][i] = z;
				}
				break;
			case 'H':
				cin >> a >>  b >> c >> z;				
				for(int i = a; i <= b; i++) {
					BMP[i][c] = z;
				}
				break;
			case 'K':
				cin >> a >> b >> c >> d >> z;
				for(int i = a; i <= b; i++) {
					for(int j = c; j <= d; j++) {
						BMP[i][j] = z;
					}
				}

				break;
			case 'F':
				fill_region();
				break;
			case 'S':
				cin >> filename;
				cout << filename << endl;
				for(int i = 1; i <= N; i++) {
					for(int j = 1; j <= M; j++) {
						cout << BMP[j][i];
					}
					cout << endl;
				}
				break;
		}
	}


	return 0;
}