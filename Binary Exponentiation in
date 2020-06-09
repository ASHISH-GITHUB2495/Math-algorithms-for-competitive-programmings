#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 50000

int binexpo(int a, int n)                 // for finding the exponent of any number
{	int res = 1;

	while (n)
	{
		if (n % 2 != 0)
		{
			res = res * a;
			n--;
		}
		else
		{
			a = a * a;
			n = n / 2;
		}

	}
	return res;
}
int modexpo(int a, int n, int p)        //for finding the large exponent modulo number
{
	int res = 1;

	while (n)
	{
		if (n % 2 != 0)
		{
			res = res * a % p;
			n--;
		}
		else
		{
			a = a * a % p;
			n = n / 2;
		}

	}
	return res;







}


int main()
{


//////////////////////////////////////start...............
	int n, a;
	cin >> a >> n;

	cout << binexpo(a, n) << endl;
	// suppose we want to find the large exponent modulo number

	//a^n % p ;

	int p = 5;

	cout << modexpo(a, n, p) << endl;

	//Lets find the fibonnacii series in O(log n) time











/////////////////////////////end................................... ....

	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
