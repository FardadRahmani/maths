Int main(){
int number{ 0 };
long long int factorial{ 1 };
int sum = 0;
	

cout << "Enter a positive integer to compute the factorial of: " << endl;

cin >> number;

for (int cnt = 1; cnt <= number; ++cnt)
{
		
		
	factorial *= cnt;

}
cout << factorial;

return 0;
}
