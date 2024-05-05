/*Extends faculty.cpp
This time using a function to compute the faculty*/

int factorial(int n)
{
	int factorial{ 1 };

	for (int cnt = 1; cnt <= n; ++cnt)
	{


		factorial *= cnt;

	}
	return factorial;

}

int main() {
	cout << "Enter a positive integer to compute the factorial of: " << endl;
	int a = 0;
	cin >> a;
	cout<<factorial(a);
return 0;
}