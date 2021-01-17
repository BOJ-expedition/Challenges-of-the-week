""" 가장 큰 정사각형 찾기
  Link: https://programmers.co.kr/learn/courses/30/lessons/12905
"""
def solution(board):
  # m = 0
  # for y, r in enumerate(board):
  #   for x, c in enumerate(r):
  #     if c == 1:
  #       for i in range(min(len(r) - x, len(board) - y)):
  #         s = 0
  #         for j in range(i + 1):
  #           s += sum(board[y + j][x:x + i + 1])
  #         if s == (i + 1) ** 2:
  #           m = max(m, s)
  # return m
  m = board[0][0]
  for j, r in enumerate(board[1:]):
    y = j + 1
    for i, c in enumerate(r[1:]):
      x = i + 1
      if c == 1:
        board[y][x] = min(min(board[y][x - 1], board[y - 1][x]), board[y - 1][x - 1]) + 1
        m = max(m, board[y][x])
  return m ** 2
