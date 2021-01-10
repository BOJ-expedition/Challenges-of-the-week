""" 외벽 점검
  Link: https://programmers.co.kr/learn/courses/30/lessons/60062
"""
def solution(n, weak, dist):
  import itertools
  ws = weak + [ w + n for w in weak ]
  m = len(dist) + 1
  for i in range(len(weak)):
    for ds in itertools.permutations(dist):
      c = 1
      p = weak[i]
      for d in ds:
        p += d
        if p < ws[i + len(weak) - 1]:
          c += 1
          p = next(w for w in ws[i + 1:i + len(weak)] if w > p)
        else:
          m = min(m, c)
          break
  if m > len(dist):
    return -1
  return m
