#include <stdio.h>
#include <stack>
#include <queue>
using namespace std;
int main() {
	int n, x,a;
	while (scanf("%d", &n) != EOF) {
		stack<int>s;
		priority_queue<int>p;
		queue<int>q;
		bool isS = true, isQ = true, isP = true;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			switch (x)
			{
			case 1:
				scanf("%d", &a);
				if (isS) {
					s.push(a);
				}
				if (isP) {
					p.push(a);
				}
				if (isQ) {
					q.push(a);
				}
				break;
			case 2:
				scanf("%d", &a);
				if (isS) {
					if (s.empty()||a != s.top())isS = false;
					else s.pop();
				}
				if (isP) {
					if (p.empty()||a != p.top())isP = false;
					else p.pop();
				}
				if (isQ) {
					if (q.empty()||a != q.front())isQ = false;
					else q.pop();
				}
				break;

			default:
				break;
			}
		}
		if (isS == true && isQ == false && isP == false)
			printf("stack\n");
		else if (isS == false && isQ == true && isP == false)
			printf("queue\n");
		else if (isS == false && isQ == false && isP == true)
			printf("priority queue\n");
		else if (isS == false && isQ == false && isP == false)
			printf("impossible\n");
		else
			printf("not sure\n");
	}



}

