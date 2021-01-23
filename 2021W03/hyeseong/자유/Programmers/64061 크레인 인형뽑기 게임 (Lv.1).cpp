// https://programmers.co.kr/learn/courses/30/lessons/64061

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int N = (int)board.size();
    
    bool flag = false;
    
    vector<int> basket;
    
    for (int i = 0; i < (int)moves.size(); ++i)
    {
        flag = false;
        
        for (int j = 0; j < N; ++j)
        {
            if (board[j][moves[i] - 1] != 0)
            {
                basket.emplace_back(board[j][moves[i] - 1]);
                board[j][moves[i] - 1] = 0;
                
                flag = true;
                
                break;
            }
        }
        
        while (flag != false)
        {
            flag = false;
            
            for (int i = 0; i < (int)basket.size() - 1; ++i)
            {
                if (basket[i] == basket[i + 1])
                {
                    answer += 2;
                    flag = true;
                    
                    basket.erase(basket.begin() + i, basket.begin() + i + 2);
                    
                    break;
                }
            }
        }
    }
    
    return answer;
}