#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container

ll gcd (ll a, ll b)
{
	while (b)
	{
		a = a % b;
		swap(a, b);

	}
	return a;
}

bool checkingDiophantineEquation(ll a, ll b, ll c)
{
	if (c % gcd(a, b) == 0)
		return true;
	else
		return false;
}


int main()
{

//////////////////////////////////////start...............
	//this will let you know is x and y exist or not for linear diophantine equation
	//the solution is only possible if GCD of cofficient devides the constant with reminder zero
	ll a, b, c;
	cin >> a >> b >> c;
	if (checkingDiophantineEquation (a, b, c))
		cout << "Yes solution exists\n";
	else
		cout << "Not possible\n" << endl;

////////////////////////////////////////end-.........................

	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better�*/
