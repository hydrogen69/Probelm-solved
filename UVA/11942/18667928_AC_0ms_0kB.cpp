#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a, c, p;
	bool G, L;

	scanf("%d", &a);
	printf("Lumberjacks:\n");

	while (a--) {
		G = L = false;
		scanf("%d", &p);
		for (int i = 0; i < 9; i++) {
			scanf("%d", &c);
			if (p < c)
				G = true;
			else
				L = true;
            p=c;
		}

		if (G && L)
			printf("Unordered\n");
		else
			printf("Ordered\n");
	}

}
