#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 10000007
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000


tuple<ll, ll, ll> extendedEuclidean(ll a, ll b)
{
	if (a == 0)
		return make_tuple(b, 0, 1);

	ll gcd, x, y;

	tie(gcd, x, y) = extendedEuclidean(b % a, a);

	return make_tuple(gcd, (y - (b / a) * x), x);


}



int main()
{


//////////////////////////////////////start...............
	ll a, b;
	cout << "Enter two number to find GCD and x and y \n";
	cout << "cofficient such that gcd(a,b)= a.x + b.y....lets go \n";

	cin >> a >> b;
	tuple<ll, ll, ll> tup = extendedEuclidean(a, b);
	ll gcd, x, y;
	E;
	tie(gcd, x, y) = tup;
	cout << "gcd(" << a << "," << b << ") = " << a << "." << x << " + " << b << "." << y << " = " << gcd << endl;
	cout << "where x=" << x << " and y=" << y << endl;




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
