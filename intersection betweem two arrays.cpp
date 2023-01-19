//intersection between two matrix
#include<iostream>
using namespace std;
void inter(int arr1[],int arr2[],int size1,int size2)
{
	
	int count=0;
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			int element=arr1[i];
		
		if(element==arr2[j])
		{
			cout<<element<<" ";
			count++;
		
		}
	}

}
cout<<endl<<count;
}
main()
{
	int arr1[5]={1,2,3,8,5};
	int arr2[6]={2,3,8,9,7,6};
	inter(arr1,arr2,5,6);
	
}


