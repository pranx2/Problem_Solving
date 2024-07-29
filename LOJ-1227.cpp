#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    int n, p, q, x, i = 1;
    while (i <= tc){
        cin >> n >> p >> q;
        int sum = 0, count = 0;
        while (n--){
            cin >> x;
            if (count + 1 <= p && sum + x <= q){
                sum += x;
                count++;
            }
        }
        cout << "Case " << i << ": " << count << "\n";
        i++;
    }
    return 0;
}
/*
2
3 2 10
1 2 3
4 5 5
4 4 5 5

Case 1: 2
Case 2: 1

15
3 1 3
3 3 3

3 2 5
1 1 5

1 1 1
1

1 1 1
2

1 1 2
3

3 1 2
1 2 3

3 1 2
1 1 1

3 1 3
2 2 2

3 4 3
4 4 4

3 4 3
2 2 2

3 1 1
2 2 2

3 1 1
1 1 1

2 1 2
1 1 1

2 2 2
2 2 2

2 1 1
1 2 3

 */