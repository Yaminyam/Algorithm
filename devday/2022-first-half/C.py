def solution(n, queries):
    answer = []
    desktop = {}
    con = 1
    ip = [0] * (n + 1)
    for q in queries:
        qq = q.split()
        if qq[1] == "request":
            if qq[0] not in desktop:
                if con <= n:
                    desktop[qq[0]] = con
                    ip[con] = 1
                    answer += [qq[0] + " 192.168.0." + str(con)]
                    con += 1
                else:
                    for i in range(1, n+1):
                        if ip[i] == 0:
                            desktop[qq[0]] = i
                            ip[i] = 1
                            answer += [qq[0] + " 192.168.0." + str(i)]
                            break
                    else:
                        answer += [qq[0] + " reject"]
            else:
                if ip[desktop[qq[0]]] == 0:
                    ip[desktop[qq[0]]] = 1
                    answer += [qq[0] + " 192.168.0." + str(desktop[qq[0]])]
                else:
                    if con <= n:
                        desktop[qq[0]] = con
                        ip[con] = 1
                        answer += [qq[0] + " 192.168.0." + str(con)]
                        con += 1
                    else:
                        for i in range(1, n+1):
                            if ip[i] == 0:
                                desktop[qq[0]] = i
                                ip[i] = 1
                                answer += [qq[0] + " 192.168.0." + str(i)]
                                break
                        else:
                            answer += [qq[0] + " reject"]
        elif qq[1] == "release":
            ip[desktop[qq[0]]] = 0

    return answer
