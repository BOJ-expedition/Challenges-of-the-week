""" 두 개 뽑아서 더하기
    Link: https://programmers.co.kr/learn/courses/30/lessons/68644
"""
def solution(numbers):
  import itertools
  return sorted(set(map(sum, itertools.combinations(numbers, 2))))
