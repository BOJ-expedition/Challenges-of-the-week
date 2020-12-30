""" 1926번: 그림
    Link: https://www.acmicpc.net/problem/1926
"""
n, m = map(int, input().split())
canvas = list(list(map(int, input().split())) for i in range(n))

""" DFS with recursion
"""
def dfs(m, x, y, w, h):
  size = 0
  if 0 <= x < w and 0 <= y < h and m[y][x] == 1:
    size = 1
    m[y][x] = 0
    size += dfs(m, x - 1, y, w, h)
    size += dfs(m, x + 1, y, w, h)
    size += dfs(m, x, y - 1, w, h)
    size += dfs(m, x, y + 1, w, h)
  return size

""" DFS with loop and stack
"""
def dfs(m, x, y, w, h):
  size = 0
  stack = [ (x, y ) ]
  while len(stack) > 0:
    x, y = stack.pop()

    # NOTE: accumulate size
    # if m[y][x] == 1:
    #   size += 1
    # NOTE: same with above
    size += m[y][x]

    # NOTE: check visited
    m[y][x] = 0

    # NOTE: push next directions to stack
    # if 0 <= x - 1 < w and 0 <= y < h and m[y][x - 1] == 1:
    #   stack.append((x - 1, y))
    # if 0 <= x + 1 < w and 0 <= y < h and m[y][x + 1] == 1:
    #   stack.append((x + 1, y))
    # if 0 <= x < w and 0 <= y - 1 < h and m[y - 1][x] == 1:
    #   stack.append((x, y - 1))
    # if 0 <= x < w and 0 <= y + 1 < h and m[y + 1][x] == 1:
    #   stack.append((x, y + 1))
    # NOTE: same with above
    for dx, dy in [ (-1, 0), (1, 0), (0, -1), (0, 1) ]:
      if 0 <= x + dx < w and 0 <= y + dy < h and m[y + dy][x + dx] == 1:
        stack.append((x + dx, y + dy))
  return size

""" using for loop
"""
# count = 0
# size = 0

# for y in range(n):
#   for x in range(m):
#     if canvas[y][x] == 1:
#       count += 1
#       size = max(size, dfs(canvas, x, y))

# print(count)
# print(size)

""" using list comprehension
"""
paints = list(dfs(canvas, x, y, m, n) for x in range(m) for y in range(n) if canvas[y][x] == 1)
l = len(paints)
print(l)
# NOTE: handling edge case
print(max(paints) if l > 0 else 0)
