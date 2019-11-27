
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp;
	queue<int> que;
    cin>>n;

    while(n!=0)
    {
		for (int i = 1; i <= n; i++) {
			que.push(i);
		}

		printf("Discarded cards:");
		while (que.size() > 1) {
			printf(" %d", que.front());
			que.pop();
			temp=que.front();
			que.pop();
			if (!que.empty())
				printf(",");
            que.push(temp);
		}
		printf("\nRemaining card: %d\n", que.front());
		que.pop();
		cin>>n;
	}
    }

