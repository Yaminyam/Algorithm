#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int chk[100001];
vector<int> student[100001];
vector<int> group;

void dfs(int s) {
    chk[s] = 1;
    group.push_back(s);
    int n;
    n = student[s].size();
    for(int i=0; i<n; i++) {
        int next = student[s][i];
        if(!chk[next])
            dfs(student[s][i]);
    }
}

vector<int> solution(int a, vector<int> t1, vector<int> t2) {
    vector<int> answer;
    int n = t1.size();
    for(int i=0; i<n; i++) {
        student[t1[i]].push_back(t2[i]);
        student[t2[i]].push_back(t1[i]);
    }
    for(int i=1; i<=a; i++) {
        if (chk[i] == 0) {
            dfs(i);
            sort(group.begin(), group.end());
            answer.push_back(group[(group.size()-1)/2]);
            group.clear();
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
