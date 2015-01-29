#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, j, count, i;
	double k, y;
	vector <int> cuts;

	count=0;

	cout << "number of possible slices\n";
	cin >> n;
	
	cuts.resize(n);
	for (i=0; i < n; i++)
	{
		if (i==0) cuts[i]=1;
		else cuts[i]=0;
	}
	
	i=2;

	//make a cut at each divisor but don't double count a cut
	while(i<n)
	{
		y = ((double) n) / i;
		
		if (y==n/i)
		{
			j=1;

			while (j<y)
			{
				cuts[j*i]=1;
				j++;
			}
		}

		i++;
	}

	for (i=0; i < n; i++)
	{
		if (cuts[i]==1) count++;
	}

	cout << "count: " << count << endl;
}
