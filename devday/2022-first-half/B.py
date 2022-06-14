def solution(s):
    answer = []
    b = ''
    chk = 0
    temp = ""
    ss = []
    for c in s:
        if b != c and chk == 1:
            ss += [temp[:-1]]
            chk = 0
            temp = ""
            temp += c
        elif b != c:
            temp += c
        elif b == c:
            chk = 1
        b = c
    if chk == 1:
        ss += [temp[:-1]]
        temp = ""
    ss += [temp]
    n = len(ss)
    ans = []
    ans += [ss[0]]
    for i in range(1, n-1):
        if ss[i] != "":
            ans += [ss[i]]
    if n > 1:
        ans += [ss[n-1]]
    return ans
