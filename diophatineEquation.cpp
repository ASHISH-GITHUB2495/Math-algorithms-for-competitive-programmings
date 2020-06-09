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
	ll a, b, c;
	cout << "This is the programm to find the x and y from" << endl;
	cout << "given equation a.x + b.y = c  ,where a,b and c are given" << endl;
	cout << "So,now Enter a,b and c respectively" << endl;

	cin >> a >> b >> c;
	tuple<ll, ll, ll> tup = extendedEuclidean(a, b);
	ll gcd, x1, y1;
	tie(gcd, x1, y1) = tup;                     // if gcd of a and b == 0 then the equation is not possible

	ll x = x1 * (c / gcd);
	ll y = y1 * (c / gcd);







	cout << "the actual eqn is " << a << "." << x << " + " << b << "." << y << " = " << c << endl;

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
