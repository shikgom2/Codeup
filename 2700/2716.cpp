#include <map>
#include <cstdio>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

typedef map< float, pair<int,int> > t_map_frac ;
int main()
{	
	int n ;
	cin >> n ;
	t_map_frac fracs ;
	for( int i=1; i<=n; i++ )
		for( int j=i+1; j<=n; j++ )
			fracs.insert(t_map_frac::value_type(((float)i)/j, pair<int,int>(i,j)));
	cout << "0/1" << endl ;
	for(t_map_frac::iterator it=fracs.begin(); it!=fracs.end(); it++)
		cout << it->second.first << "/" << it->second.second << endl ;
	cout << "1/1" << endl ;
	return 0;
}
