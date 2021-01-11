def solution(n, weak, dist):
  import itertools
  wss = weak + [ (w + n) for w in weak[:-1] ]
  wss = [ (wss[i + 1] - wss[i]) for i in range(len(wss) - 1) ]
  wss = [ wss[i:i + len(weak) - 1] for i in range(len(weak)) ]
  m = len(dist)
  for i in range(len(wss)):
    # print('ws', wss[i])
    for ds in itertools.permutations(dist):
      ws, ds = list(wss[i]), list(ds)
      # print(1, ws, ds)
      b = False
      while sum(ws) > 0 and sum(ds) > 0:
        if ws[0] > ds[0]:
          if not b:
            break
          ds.pop(0)
          ws.pop(0)
          b = False
        else:
          # print('--', ws, ds)
          ds[0] -= ws.pop(0)
          # print('---', ws, ds)
          b = ds[0] != 0
          if not b:
            ds.pop(0)
      if b:
        ds.pop(0)
      # print(2, ws, ds)
      if len(ws) == 0:
        # print(3, ws, ds, len(dist) - len(ds))
        m = min(m, len(dist) - len(ds))
  return m
