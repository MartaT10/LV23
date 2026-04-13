#include <iostream>
#include <queue>
#include <random>
using namespace std;

void a_operacije();
void b_imena();

int main()
{
	//Marta Topolnjak, 1.RM

	//a_operacije();
	//b_imena();
}

void a_operacije() {
	int n; cin >> n;
	int a;
	queue<int> red;

	for (int i = 0;i < n;i++) {
		a = rand() % 1001;
		red.push(a);
	}

	for (int i = 0;i < n;i++) {
		if (red.front() > 99 && red.front() < 1000) {
			cout << red.front() << " ";
		}
		red.pop();
	}
}

void b_imena() {
	queue<string> imena;
	string ime; cin >> ime;

	while (ime != "Kraj") {
		imena.push(ime);
		cin >> ime;
	}

	int dulj = imena.size();
	cout << dulj << ": ";
	for (int i = 0;i < dulj;i++) {
		cout << imena.front()[0] << ". ";
		imena.pop();
	}
}
