import itertools

def solution(numbers):
    answer = []
    a = set(itertools.permutations(numbers, 2))

    for i in a:
        if i[0] in numbers and i[1] in numbers:
            answer.append(sum(i))

    answer = list(set(sorted(answer)))
    return answer