#include <bits/stdc++.h>
using namespace std;

int roman, i=0, v=0, x=0, l=0, c=0;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	
	cin >> roman;
	int a = roman%10;
	roman /= 10;
	int b = roman%10;
	roman /=10;
	int c = roman;
	switch(a) {
	case 0:
		break;
	case 1 :
		i++;
		break;
	case 2:
		i+=2;
		break;
	case 3:
		i+=3;
		break;
	case 4:
		i++;
		v++;
		break;
	case 5:
		v++;
		break;
	case 6:
		v++;
		i++;
		break;
	case 7:
		v++;
		i+=2;
		break;
	case 8:
		v++;
		i+=3;
		break;
	case 9:
		i++;
		x++;
		break;
	}

	return 0;
}
