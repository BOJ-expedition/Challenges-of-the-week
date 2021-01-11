""" 삼각 달팽이
    Link: https://programmers.co.kr/learn/courses/30/lessons/68645
"""
def solution(n):
  m = [ [ 0 ] * (i + 1) for i in range(n) ]
  ds = [ (0, 1), (1, 0), (-1, -1) ]
  i, j, x, y = 0, 0, 0, -1
  while i < n * (n + 1) // 2 and j < n:
    for k in range(n - j):
      dx, dy = ds[j % len(ds)]
      x += dx
      y += dy
      m[y][x] = i + 1
      i += 1
    j += 1
  answer = [ c for r in m for c in r if c > 0 ]
  return answer
