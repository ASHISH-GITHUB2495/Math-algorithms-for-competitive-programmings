#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container
void linearDiophantineSolutions(ll a, ll b, ll c, ll xmin, ll xmax, ll ymin, ll ymax)
{
	//the solution always exists between 0 to c.

	int flag = 0;
	for (ll i = xmin; i <= xmax; i++)
	{
		if ((c - (i * a)) % b == 0)
		{	ll y = (c - (i * a)) / b;
			flag = 1;
			if (y >= ymin && y <= ymax)
			{
				cout << "x = " << i << " and y = " << (c - (i * a)) / b << endl;
			}
		}

	}

	if (flag == 0)
		cout << "Not possible\n" << endl;
}
int main()
{

//////////////////////////////////////start...............
	//Number of given solution of diophantine equations(if exists) BRUTE-Force
	// ax+by=c ; find x=(c-by)/a and y=(c-ax)/b
	// we will find the solutions that exis in between intervals

	ll a, b, c;
	cin >> a >> b >> c;
	ll xmin, xmax, ymin, ymax;
	cin >> xmin >> xmax >> ymin >> ymax;
	linearDiophantineSolutions(a, b, c, xmin, xmax, ymin, ymax);
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
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
