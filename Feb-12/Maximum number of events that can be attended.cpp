https://practice.geeksforgeeks.org/problems/ea8230731ccb057120bafb351c10c48b2d496125/1
int maxEvents(int start[], int end[], int N) {

        priority_queue <int, vector<int>, greater<int>> pq; vector<pair<int,int>> A(N); for(int i=0; i<N; i++) { A[i].first = start[i]; A[i].second = end[i]; } sort(A.begin(),A.end()); int i = 0, res = 0, d = 0; while (pq.size() > 0 || i < N) { if (pq.size() == 0) d = A[i].first; while (i < N && A[i].first <= d) pq.push(A[i++].second); pq.pop(); ++res, ++d; while (pq.size() > 0 && pq.top() < d) pq.pop(); } return res;

    }
