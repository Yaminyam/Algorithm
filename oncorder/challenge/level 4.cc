#include <vector>
using namespace std;

//핵심 소스코드의 설명을 주석으로 작성하면 평가에 큰 도움이 됩니다.
class Solution{
public:
    int solution(vector<int> arr){
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] % 2 == 0)count++;
        }
        return count;
    }
};
