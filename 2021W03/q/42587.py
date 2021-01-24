""" 프린터
  Link: https://programmers.co.kr/learn/courses/30/lessons/42587
"""
def solution(priorities, location):
  ps = list(enumerate(priorities))
  c = 0
  while len(ps) > 0:
    i, p = ps.pop(0)
    if any(q > p for j, q in ps):
      ps.append((i, p))
    elif i == location:
      return c + 1
    else:
      c += 1
