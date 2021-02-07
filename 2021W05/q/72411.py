""" 순위 검색
  Link: https://programmers.co.kr/learn/courses/30/lessons/72412
"""
def solution(orders, course):
  answer = []
  os = list(''.join(sorted(o)) for o in orders)
  import itertools, collections
  for l in course:
    counter = collections.Counter(''.join(c) for o in os for c in itertools.combinations(o, l))
    if len(counter) > 0:
      x = max(counter.values())
      for k, v in counter.items():
        if v > 1 and v == x:
          answer.append(k)
  return sorted(answer)
