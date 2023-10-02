#include<iostream>
using namespace std;

void MonsterGen(); //declaration

int main() {
	char input;
	while (1) { //game loop
		//your text based game goes here!
		MonsterGen();
		cout << "press any key to continue..." << endl;
		cin >> input;
	}
}



void MonsterGen() { //definition
	int num = rand() % 100; //creates a number between 1-100
	if (num < 15) //15% chance of WITCH
		cout << "A witch spawned." << endl;
	else if (num < 20) //5% chance of a skeley
		cout << "A skeleton appeared!" << endl;
	else if (num < 50) //30% chance of an alien!
		cout << "An Alien appears!" << endl;
	else if (num < 75) //25% chance of an spider
		cout << "An king spider appeared!" << endl;
	else //40% chance
		cout << "nothing appeared." << endl;


}
