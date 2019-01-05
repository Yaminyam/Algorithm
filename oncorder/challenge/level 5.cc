//핵심 소스코드의 설명을 주석으로 작성하면 평가에 큰 도움이 됩니다.
class Solution{
public:
    int solution(int a){
        int count=0;
        for(int i=1;i<=a;i++){
            int a=i;
            for(int j=0;j<5;j++){
                if(a%100==13){
                    count++;
                    break;
                }
                a/=10;
            }
        }
        return count;
    }
};
