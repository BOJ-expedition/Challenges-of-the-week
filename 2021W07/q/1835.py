""" 단체사진 찍기
  Link: https://programmers.co.kr/learn/courses/30/lessons/1835
"""
def solution(n, data):
  c = 0
  import itertools
  for p in itertools.permutations("ACFJMNRT"):
    for v in data:
      a, _, b, o, d = v
      if a not in p or b not in p:
        break
      i, j = p.index(a), p.index(b)
      d, l = int(d), abs(i - j) - 1
      if o == '=' and l != d:
        break
      elif o == '>' and l <= d:
        break
      elif o == '<' and l >= d:
        break
    else:
      c += 1
  return c
def solution(n, data):
  def f(x, i, j):
    if i == j:
      print(x)
      yield x
    else:
      for k in range(i, j + 1):
        y = list(x)
        y[i], y[k] = y[k], y[i]
        yield from f(y, i + 1, j)
        y[i], y[k] = y[k], y[i]
  print(list(f([1,2,3], 0, 2)))
