""" 스킬트리
    Link: https://programmers.co.kr/learn/courses/30/lessons/49993
"""
def solution(skill, skill_trees):
  available_skill_trees = list(skill[:i + 1] for i in range(len(skill)))
  def _solve(skill_tree):
    filtered_skill_tree = ''.join(c for c in skill_tree if c in skill)
    return len(filtered_skill_tree) == 0 or filtered_skill_tree in available_skill_trees
  return len(list(filter(None, map(_solve, skill_trees))))
