/*
Extends  movingTheAxis.cpp
*/
int main(){
string playerName{ " " };
	cout << "Geben Sie den Namen Ihres SPielers ein:";
	cin >> playerName;
	char direction{};

	int playerPosition[]{ 3 , 2 };

	cout << "Geben Sie die Position des Spielers auf der X und Y Achse an  ";
	cout << "X: ";
	cin >> playerPosition[0];
	cout << "Y: ";
	cin >> playerPosition[1];

	string enemy1{};
	int enemy1Position[2]{ 4 , 4};
	
	cout << endl;
	cout << "Enemy1 auf " << "X:" << enemy1Position[0] << " Y:" << enemy1Position[1] << endl;

	string enemy2{};
	int enemy2Position[]{ 5 , 5 };
	cout << "Enemy2 auf " << "X:" << enemy2Position[0] << " Y:" << enemy2Position[1] << endl;

	while (true)
	{

		if (playerPosition[0] == enemy1Position[0] && playerPosition[1] == enemy1Position[1])
		{

			cout << "Kampf begonnen mit enemy1!"<<endl;
		}
		else if (playerPosition[0] == enemy2Position[0] && playerPosition[1] == enemy2Position[1])
		{
			cout << "Kampf begonnen mit enemy2!"<<endl;
		}


		cout << "Bewegen Sie sich auf der Karte nach: (N)ord, (O)st, (S)ued, (W)est";

		cin >> direction;
		switch (direction)
		{
		case 'N':
		case  'n':
			cout << "1 Schritt Nach Norden!" << endl;
			playerPosition[0]++;
			cout << "Player auf " << "X:" << playerPosition[0] << " Y:" << playerPosition[1] << endl;
			break;

		case 'S':
		case  's':
			cout << "Nach Sueden!" << endl;
			playerPosition[0]--;
			cout << "Player auf " << "X:" << playerPosition[0] << " Y:" << playerPosition[1] << endl;
			break;


		case 'O':
		case  'o':
			cout << "Nach Osten!" << endl;
			playerPosition[1]++;
			cout << "Player auf " << "X:" << playerPosition[0] << " Y:" << playerPosition[1] << endl;
			break;

		case 'W':
		case  'w':
			cout << "Nach Westen!" << endl;
			playerPosition[1]--;
			cout << "Player auf " << "X:" << playerPosition[0] << " Y:" << playerPosition[1] << endl;
			break;


		}







	}

	return 0;
}