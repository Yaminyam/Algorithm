#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int h, int k, vector<int> boxes) {
    int ans = 0;

    sort(boxes.begin(), boxes.end());
    int n = boxes.size();
    boxes.push_back(h);
    int b=0;
    for(int i=0; i<n; i++) {
        if(boxes[i]-b<=k) {
            if(boxes[i+1]-b<=k) continue;
            ans++;
            b=boxes[i];
        }
    }
    if(b+k<h) ans=-1;

    return ans;
}
