int main (){

int A[2][3]
{
	{-5, 2, 8}, // Row 1
	{1, 0, 0} // Row 2

};
int B[2][3]
{
	{1, 0, 2}, // Row 1
	{0, 3, -6} // Row 2

};
int C[2][3]
{
	0

};

cout << "A =" << endl;
cout << setw(10) << left << A[0][0];
cout << setw(10) << left << A[0][1];
cout << setw(10) << left << A[0][2] << endl;
	
cout << setw(10) << left << A[1][0];
cout << setw(10) << left << A[1][1];
cout << setw(10) << left << A[1][2] << endl;

cout << "B =" << endl;
cout << setw(10) << left << B[0][0];
cout << setw(10) << left << B[0][1];
cout << setw(10) << left << B[0][2] << endl;

cout << setw(10) << left << B[1][0];
cout << setw(10) << left << B[1][1];
cout << setw(10) << left << B[1][2] << endl;
cout << endl; 
cout << endl;
for (int cnt = 0; cnt < 2; ++cnt)//for row
{

		
	for (int cnt1 = 0; cnt1 < 3; ++cnt1) //for column
	{
		C[cnt][cnt1] = A[cnt][cnt1] + B[cnt][cnt1];

	}
		

}
cout << "A+B =" << endl;
cout << setw(10) << left << C[0][0];
cout << setw(10) << left << C[0][1];
cout << setw(10) << left << C[0][2] << endl;

cout << setw(10) << left << C[1][0];
cout << setw(10) << left << C[1][1];
cout << setw(10) << left << C[1][2] << endl;


return 0;
}