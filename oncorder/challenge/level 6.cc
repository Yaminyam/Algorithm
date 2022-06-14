//핵심 소스코드의 설명을 주석으로 작성하면 평가에 큰 도움이 됩니다.
class Solution{
public:
    int d[10001]={0,};

    int dn(int i) {
    	int res = i;
    	if (i >= 1000) { res += i / 1000; i %= 1000; }
    	if (i >= 100) { res += i / 100; i %= 100; }
    	if (i >= 10) { res += i / 10; i %= 10; }
    	return res += i;
    }

    int solution(int a){
        for (int i = 1; i <= 1000; i++) {
    		d[dn(i)]++;
    	}
    	return d[a];
    }
};
