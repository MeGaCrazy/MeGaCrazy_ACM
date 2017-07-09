#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	std::multiset <int > G, B;
	std::multiset <int> ::iterator fit, it;
	vector < int > storeG, storeB;
	int n, i, j, k, x, y, battles, ng, nb;
	scanf("%d", &n);
	while (n--) {
		G.clear(); B.clear();
		storeB.clear(); storeG.clear();
		scanf("%d %d %d", &battles, &ng, &nb);
		for (i = 0; i < ng; i++)
		{
			scanf("%d", &x);
			G.insert(x);
		}
		for (i = 0; i < nb; i++)
		{
			scanf("%d", &x);
			B.insert(x);
		}

		while (G.size() > 0 && B.size() > 0)
		{
			storeG.clear(); storeB.clear();

			for (i = 0; i < battles; i++)
			{
				it = G.end(); it--;
				fit = B.end(); fit--;
				if (*it > *fit)
				{
					G.erase(it); B.erase(fit);
					storeG.push_back(*it - *fit);
				}
				else if (*it < *fit)
				{
					G.erase(it); B.erase(fit);
					storeB.push_back(*fit - *it);
				}
				else
				{
					G.erase(it); B.erase(fit);
				}


				if (G.size() == 0 || B.size() == 0)
					break;
			}

			for (int z = 0; z < storeB.size(); z++)
				B.insert(storeB[z]);
			for (int z = 0; z < storeG.size(); z++)
				G.insert(storeG[z]);

		}


		if (G.size() == 0 && B.size() == 0)
		{
			printf("green and blue died\n");
		}
		else if (G.size() > 0)
		{
			printf("green wins\n");
			it = G.end();
			do {
				it--;
				printf("%d\n", *it);
			} while (it != G.begin());

		}
		else if (B.size() > 0)
		{
			printf("blue wins\n");
			it = B.end();
			do {
				it--;
				printf("%d\n", *it);
			} while (it != B.begin());

		}
		if (n)
			printf("\n");
	}


	return 0;

}
/*
#include <stdio.h>
#include <set>
#include <vector>
using namespace std;
int main() {
	int t, b, sg, sb, a;
	scanf("%d", &t);
	while (t--) {
		multiset<int>ssg, ssb;
		vector<int>storeg, storeb;
		scanf("%d %d %d", &b, &sg, &sb);
		for (int i = 0; i < sg; i++) {
			scanf("%d", &a);
			ssg.insert(a);
		}
		for (int i = 0; i < sb; i++) {
			scanf("%d", &a);
			ssb.insert(a);
		}

		while (ssg.size() > 0 && ssb.size()>0) {
			storeb.clear(); storeg.clear();
			for (int i = 0; i < b&&ssg.size()>0 && ssb.size()>0; i++) {
				multiset<int>::iterator itr1, itr2;
				itr1 = ssg.end(); itr1--;
				itr2 = ssb.end(); itr2--;
				if (*itr1 == *itr2) {
					ssg.erase(itr1);
					ssb.erase(itr2);
				}
				else if (*itr1 > *itr2) {
					int tmp = *itr1 - *itr2;
					ssg.erase(itr1);
					ssb.erase(itr2);
					storeg.push_back(tmp);
				}
				else if (*itr1 < *itr2) {
					int tmp = *itr2 - *itr1;
					ssg.erase(itr1);
					ssb.erase(itr2);
					storeb.push_back(tmp);
				}
			}
			for (int z = 0; z < storeb.size(); z++) {
				ssb.insert(storeb[z]);
			}
			for (int z = 0; z < storeg.size(); z++) {
				ssg.insert(storeg[z]);
			}
		}
			if (!ssg.size() && !ssb.size()) {
				printf("green and blue died\n");
			}
			else if (ssg.size() >0) {
				printf("green wins\n");
				multiset<int>::iterator itr;
				itr = ssg.end(); itr--;
				for (;; itr--) {
					printf("%d\n", *itr);
					if(itr==ssg.begin())break;
				}
			}
			else if (ssb.size() > 0) {
				printf("blue wins\n");
				multiset<int>::iterator itr;
				itr = ssb.end(); itr--;
				for (;; itr--) {
					printf("%d\n", *itr);
					if(itr==ssb.begin())break;
				}
			}
			if (t)printf("\n");
		}
}
*/