int evaluate_position(char board[8][8]) 
{
    int white_values = 0, black_values = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            switch (board[i][j]) {
                case 'Q': 
                    white_values += 9; break;
                case 'R':
                    white_values += 5; break;
                case 'B': case 'N':
                    white_values += 3; break;
                case 'P':
                    white_values++; break;
                case 'q':
                    black_values += 9; break;
                case 'r':
                    black_values += 5; break;
                case 'b': case 'n':
                    black_values += 3; break;
                case 'p':
                    black_values++; break;            
                default: 
                    break;
            }
        }
    }
    return white_values - black_values;
}
