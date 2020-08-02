def is_palindrome(word):
    if word == word[::-1]:
        return "yes"
    else:
        return "no"

while True:
    a = input()
    if a == "0":
        break
    print(is_palindrome(a))
