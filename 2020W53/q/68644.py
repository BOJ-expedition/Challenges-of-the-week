""" 두 개 뽑아서 더하기
    Link: https://programmers.co.kr/learn/courses/30/lessons/68644
"""
def solution(numbers):
  import itertools
  return sorted(set(map(sum, itertools.combinations(numbers, 2))))

assert(solution([2,1,3,4,1]) == [2,3,4,5,6,7])
assert(solution([5,0,2,7]) == [2,5,7,9,12])
