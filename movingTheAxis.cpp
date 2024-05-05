
int main()
{
int position[2]{0, 0};
unsigned char ch{ 0 };
bool stopMoving = false;
	
while (!stopMoving)
{
	cout << "Current Position---(" << position[0] << "," << position[1] << ")" << endl;
	cout << "Move(N)orth, (E)ast, (S)outh, (W)est(Q)uit ? " << endl;
	cin >> ch;
	cout << endl;

	switch (ch)
	{
		case 'n':
		case 'N':
			cout << "Going North!" << endl;
			++position[1];
				
			break;
		case 'e':
		case 'E':
			cout << "Going East!" << endl;
			++position[0];
			break;
		case 's':
		case 'S':
			cout << "Going South!" << endl;
			--position[1];
			break;
		case 'w':
		case 'W':
			cout << "Going West!" << endl;
			--position[0];
			break;
		case 'q':
		case 'Q':
			cout << "Quitting!" << endl;
			stopMoving=true;
			break;
		default:
			cout << "Wrong case executed implies you did not ";
			cout << "enter a n, e, s or w." << endl;
			break;





	}

}

return 0;
}