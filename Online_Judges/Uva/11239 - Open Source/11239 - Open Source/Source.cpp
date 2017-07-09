#include <iostream>
#include <string>
#include <functional>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	string s, tmp; int i = -1;
	map<string, int>general, m;
	vector<string>project;
	pair<int, string>p;
	vector <pair<int, string>>show;
	vector<vector<string>>stdfrpro(100);
	while (getline(cin,s)&&s[0] != '0') {
		if (s[0] == '1') {
			int length = project.size(),cnt=0;
			for (int i = 0; i < length; i++) {
				int t = stdfrpro[i].size();
				for (int j = 0; j < t; j++) {
					if (general[stdfrpro[i][j]])cnt++;
				}
				p.first = cnt, p.second = project[i];
				show.push_back(p);
			}
			sort(show.begin(), show.end());
			int ss = show.size();
			for (int i = 0; i < ss; i++) {
				cout << show[i].first << " " << show[i].second << endl;
			}
		}
		if (s[0] >=65&&s[0]<=90) {
			project.push_back(s);
			i++;
			for (auto itr = m.begin(); general.size() > 0 && itr != m.end(); itr++) {
				if (general[(*itr).first] == 1)general[(*itr).first] = -1;
				else if (general[(*itr).first] == 0)general[(*itr).first]=1;
			}
			m.clear();
		}
		else
		{   
			stdfrpro[i].push_back(s);
			if (!m[s])m[s]++;
		}


	}
}