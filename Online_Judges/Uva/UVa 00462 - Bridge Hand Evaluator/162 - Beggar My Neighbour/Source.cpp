#include <iostream>
#include <map>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() {
	int sum = 0, v[200] = { 0 };
	map<string, int>m; char s[3];
	while (scanf("%s",s)==1) {
		int flag1 = 0, flag2 = 0, flag3 = 0;
		for (int i = 0; i < 13; i++) {
			if (i != 0)cin >> s;
			v[s[1]]++; m[s]++;
			// to calculate the total points
			if (s[0] == 'K')sum += 3;
			else if (s[0] == 'Q')sum += 2;
			else if (s[0] == 'J')sum++;
			else if (s[0] == 'A')sum += 4;
		} 	// add more points
		if (v['S'] == 0 || v['S'] == 1)sum += 2;
		else if (v['S'] == 2)sum += 1;
		if (v['H'] == 0 || v['H'] == 1)sum += 2;
		else if (v['H'] == 2)sum += 1;
		if (v['D'] == 0 || v['D'] == 1)sum += 2;
		else if (v['D'] == 2)sum += 1;
		if (v['C'] == 0 || v['C'] == 1)sum += 2;
		else if (v['C'] == 2)sum += 1;
		//subtract points
		if (m["KS"] == 1 && v['S'] == 1)sum--, flag1 = 1;
		if (m["KH"] == 1 && v['H'] == 1)sum--, flag1 = 1;
		if (m["KD"] == 1 && v['D'] == 1)sum--, flag1 = 1;
		if (m["KC"] == 1 && v['C'] == 1)sum--, flag1= 1;
		///
		if (m["QS"] >= 1 && v['S'] <= 2)sum--, flag2 = 1;
		if (m["QH"] >= 1 && v['H'] <= 2)sum--, flag2 = 1;
		if (m["QD"] >= 1 && v['D'] <= 2)sum--, flag2 = 1;
		if (m["QC"] >= 1 && v['C'] <= 2)sum--, flag2 = 1;
		///
		if (m["JS"] >= 1 && v['S'] <= 3)sum--, flag3 = 1;
		if (m["JH"] >= 1 && v['H'] <= 3)sum--, flag3 = 1;
		if (m["JD"] >= 1 && v['D'] <= 3)sum--, flag3 = 1;
		if (m["JC"] >= 1 && v['C'] <= 3)sum--, flag3 = 1;
			// output
			if (flag1 == 0 && flag2 == 0 && flag3 == 0 && sum >= 16)cout << "BID NO-TRUMP" << endl;
			else if (sum >= 14) {
				if (v['S'] >= v['H'] && v['S'] >= v['D'] && v['S'] >= v['C'])cout << "BID S" <<endl;
				else if (v['H'] >= v['S'] && v['H'] >= v['D'] && v['H'] >= v['C'])cout << "BID H" << endl;
				else if (v['D'] >= v['S'] && v['D'] >= v['H'] && v['D'] >= v['C'])cout << "BID D" << endl;
				else if (v['C'] >= v['S'] && v['C'] >= v['H'] && v['C'] >= v['D'])cout << "BID C" << endl;
			}
			else cout << "PASS" << endl;
			// clear ... 
			v['S'] = 0; v['D'] = 0; v['H'] = 0; v['C'] = 0, m.clear(), sum = 0;
	}
}