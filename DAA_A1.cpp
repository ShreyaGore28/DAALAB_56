#include <iostream>
using namespace std;
int countzeros(int arr[], int n)
{
	int low=0;
	int high=n-1;
    while (low<=high)
    {
       
        int mid =(low+high)/2;
        if(arr[mid]==1)
        {
        	low=mid+1;
		}
		else
		{
			high=mid-1;
		}
    }
    return n-low;
}


int main()
{
	int n;
	cout<<"enter array size :";
	cin>>n;
	int arr[n];
	cout<<"\n enter array element having 1 and 0's:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
   cout<<"count of zeros are :"<<countzeros(arr,n)<<endl;
   return 0;
}
