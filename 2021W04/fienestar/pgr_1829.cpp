/*
    카카오프렌즈 컬러링북
    https://programmers.co.kr/learn/courses/30/lessons/1829
*/

#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(int, int, vector<vector<int>> picture)
{
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int moves[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    
    queue<pair<size_t,size_t>> q;

    for(size_t i=0; i!=picture.size(); ++i)
        for(size_t j=0; j!=picture[i].size(); ++j)
            if(picture[i][j]){
                int size_of_area = 1;
                int color = picture[i][j];

                picture[i][j]=0;
                ++number_of_area;

                q.push({i,j});

                while(!q.empty()){
                    size_t x = q.front().first;
                    size_t y = q.front().second;
                    
                    q.pop();
                    
                    for(auto& move:moves){
                        size_t moved_x = x + move[0];
                        size_t moved_y = y + move[1];
                        if(moved_x < picture.size()
                           && moved_y < picture[moved_x].size()
                           && picture[moved_x][moved_y] == color){
                            
                            picture[moved_x][moved_y] = 0;
                            ++size_of_area;
                            q.push({moved_x,moved_y});
                        }
                    }
                }
                max_size_of_one_area = max({max_size_of_one_area, size_of_area});
            }
    return {number_of_area,max_size_of_one_area};
}