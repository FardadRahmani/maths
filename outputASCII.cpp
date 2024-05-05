int main(){

unsigned char ch{ 33 };
cout << ch << endl;
	
for (int cnt1 = 33; cnt1 < 256; ++cnt1) //for column
{
		
	cout <<(int) ch << "= " << ch << " ";
	ch++;
}
return 0;
}