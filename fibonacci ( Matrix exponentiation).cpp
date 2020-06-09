#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 50000
//vector<vector<int> > vec( row , vector<int> (column, 0));

#define matrix  vector <vector <ll>>


matrix matmul (matrix mat1, matrix mat2)
{	matrix m(2, vector<ll> (2, 0));
	m[0][0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
	m[0][1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
	m[1][0] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
	m[1][1] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

	return m;


}
matrix matric(matrix mat, ll n)
{
	matrix m(2, vector <ll> (2, 0));
	m[0][0] = 1;
	m[0][1] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
	while (n >= 0)
	{
		if (n == 0)
			return m;

		if (n % 2 != 0)
		{	n = n - 1;
			m = matmul(m, mat);
		}
		else
		{	n = n / 2;
			mat = matmul(mat, mat);
		}

	}



}


int main()
{


//////////////////////////////////////start...............

	ll n;
	// ENTER YOUR NUMBER TO FIND FIBONNACCI FOR ....................................>>>>>>>>>>>>
	cin >> n;

	for (ll i = 0; i <= n; i++)
	{
		matrix m(2, vector<ll> (2, 0));
		m[0][0] = 1;
		m[0][1] = 1;
		m[1][0] = 1;
		m[1][1] = 0;
		if (i == 0)
		{
			cout << "the fibonnaccii at " << i << " is : " << 0 << endl;
			continue;
		}



		matrix mat = matric(m, i - 1);      //matrix comes after matrix exponentiation

		cout << "the fibonnaccii at " << i << " is : " << mat[0][0] << endl;


	}


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
