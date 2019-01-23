#include <iostream>

#include "BowlingGame.h"

using namespace std;

int main(int argc, char* argv[]) {

	system("pause");

	string sequence = "";
	BowlingGame *game;

	try {
		while (sequence != "q") {

			system("cls");

			cout << endl << "ENTERING BOWLING GAME " << endl << endl;
			cout << ">> Enter sequence: (example: '-/X123456789', 'q' to quit)" << endl << endl;

			cin >> sequence;

			if (sequence != "q") {

				game = new BowlingGame();
				game->setSequence(sequence);

				cout << endl << ">> Your score is " << game->getScore() << endl << endl;

				delete game;
			}
			else
				cout << endl << ">> Goodbye" << endl << endl;

			system("pause");
		}
	}
	catch (exception &e)
	{
		cout << endl << e.what() << endl << endl;
		system("pause");
	}
	
	return 0;
}