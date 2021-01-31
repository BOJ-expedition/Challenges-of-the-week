""" 순위
  Link: https://programmers.co.kr/learn/courses/30/lessons/49191
"""
def solution(n, results):
  graph = dict((k + 1, {}) for k in range(n))
  for win, lose in results:
    graph[win][lose], graph[lose][win] = 1, -1
  import itertools
  for current, (win, lose), result in itertools.product(range(1, n + 1), itertools.permutations(range(1, n + 1), 2), (1, -1)):
    if not graph.get((win, lose), False) and graph[win].get(current, 0) == result and graph[current].get(lose, 0) == result:
      graph[win][lose] = result
  return len(list(v for v in graph.values() if len(v.values()) == n - 1))
