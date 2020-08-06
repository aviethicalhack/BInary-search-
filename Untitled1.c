#include<iostream>
using namespace std;

int main()
{
 int n,i,arr[30],Upb,Lwb,midd,search;           //declare the variable
 cout<<"Enter total no. of elements u want :\n";  //print the statement for user for total no he want to print
 cin>>n;
 cout<<"Enter the elements:\n";
 for(i=0;i<n;i++)             //for loop will be started to entered  element in an array
 {

		cin>>arr[i];
 }
 cout<<"Enter the no. u want to find:\n";
 cin>>search;
 Upb=0;              //upperbond should be assigned  with 0
 Lwb=n-1;             //lowerbond should be assigned with n-1
 midd=(Upb+Lwb)/2;     //midd should be assigned(upperbond+lowerbond)/2
 while(Upb<=Lwb)      //while loop will be started from 0 to n-1
 {

		if(arr[midd] < search) //if midd element is lesser than search element
		{
		    Upb = midd + 1;  //upb should be incremented by (midd + 1)

		}
		else if(arr[midd] == search)
		{
			cout<<search<<" found at location:"<<midd<<"\n";
			break;  // if element found at middle it print statement element found and positon
		}
		else
		{
			 Upb = midd - 1;
		}
		midd = (Upb + Lwb)/2;
 }
if(Upb > Lwb)             //if element not found print statement element is not present
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}

}
