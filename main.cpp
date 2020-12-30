#include <iostream>
using namespace std;
#define MAX 20

int main()
{
	int arr[MAX], i, j, n, temp, smallest;
	cout << "Enter the number of elements : ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << "\t:";
		cin >> arr[i];
	}
	cout << "Unsorted list is :\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << "\t";

	/*Selection sort*/
	for (i = 0; i < n - 1; i++)
	{
		/*Find the largest element*/
		smallest = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[smallest] < arr[j])
				smallest = j;
		}
		if (i != smallest)
		{
			temp = arr[i];
			arr[i] = arr[smallest];
			arr[smallest] = temp;
		}
		cout << "\nAfter Pass " << i + 1 << "  elements are :  ";
		for (j = 0; j < n; j++)
			cout << arr[j] << "\t";
		cout << endl;
	}/*End of for*/

	cout << "Sorted list is :\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}/*End of main()*/
