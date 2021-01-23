// https://programmers.co.kr/learn/courses/30/lessons/49994

#include <string>
#include <unordered_map>
using namespace std;

char d[4] = {'U', 'D', 'L', 'R'};

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int calc(int x, int y)
{
    return (x + 5) + ((y + 5) * 11);
}

bool check(int x, int y)
{
    if ((x >= -5) && (x <= 5) && (y >= -5) && (y <= 5))
        return true;
        
    else
        return false;
}

int solution(string dirs)
{
    int answer = 0;
    unordered_map<int, unordered_map<int, bool>> umap;
    
    int curX = 0, curY = 0;
    
    for (int i = 0; i < (int)dirs.size(); ++i)
    {
        char& c = dirs[i];
        
        for (int j = 0; j < 4; ++j)
        {
            if (c == d[j])
            {
                if (check(curX + dx[j], curY + dy[j]))
                {
                    int nX = curX + dx[j];
                    int nY = curY + dy[j];
                    
                    int src = calc(curX, curY);
                    int dest = calc(nX, nY);
                    
                    if ((umap[src].find(dest) == umap[src].end()))
                    {
                        umap[src][dest] = true;
                        umap[dest][src] = true;
                        
                        answer++;
                    }
                    
                    curX = nX;
                    curY = nY;
                }
            }
        }
    }
    
    return answer;
}