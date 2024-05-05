#include <iostream>
/*
Task:
Durchschnitt berechnen

*/
#include <cmath>
int main() {


	int numberOfValues{ 0 };
int values[100]{0};
int sum = 0;
int avg=0;

cout << "Enter the number of values to average in the Range 0-100: " << endl;
	
cin >> numberOfValues;

	
while ((numberOfValues<0) || (numberOfValues>100) )
{
	
	cout << "Wrong Value. Enter the number of values to average in the Range 0-100: " << endl;
		

}

for (int cnt = 0; cnt < numberOfValues; ++cnt)
{
	cout << "[" << cnt << "] =";
	cin >> values[cnt];
	sum += values[cnt];
		
}
avg = sum /numberOfValues;
cout << "Avergage= " << avg << endl;

return 0;


}
