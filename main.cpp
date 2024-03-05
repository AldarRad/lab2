#include <iostream>
#include <random>
/// LAB2
int main()
{
	const int n=3;
	int s=0;
	int mas[n][n];
	std::cout << "";
	for (int i = 0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			std::cin>>mas[i][j];
		}
		
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			std::cout << mas[i][j] << " ";
		}
		std::cout << "\n";
	}
	for (int i = 0;i < n;i++)
	{
		if (mas[i][i] == 0) {
			for (int j = 0;j < n;j++)
			{
				s += mas[i][j];				
			}
			mas[i][i]= s;
			s = 0;
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			std::cout << mas[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}