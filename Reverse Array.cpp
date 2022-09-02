#include<iostream>
using namespace std;

int main()
{
	int array[] = {1,2,3,4,5};
	int temp[5];
	int count = 0;
	
	for(int i = 4; i>=0; i--)
	{
		temp[count++] = array[i];
	}
	
	for(int j=0; j<=4; j++)
	{
		array[j] = temp[j];
		cout<<array[j]<<" ";
	}
	
	return 0;

}
