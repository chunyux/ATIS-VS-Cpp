#include "champMarkov.h"


champMarkov::champMarkov(int(* m)[WIDTH])
{
	for (int i = 1; i < (HEIGHT-1); i++){
		for (int j = 1; j < (WIDTH-1); j++){
			//Champ Markov
			if (m[i - 1][j]!= 0 && m[i + 1][j] != 0 && m[i][j + 1] != 0 && m[i][j - 1] != 0){
				mAfter[i][j] = m[i][j];
			}
			else if (m[i - 1][j - 1] != 0 && m[i + 1][j - 1] != 0 && m[i + 1][j + 1] != 0 && m[i + 1][j - 1] != 0){
				mAfter[i][j] = m[i][j];
			}
			else
			{
				mAfter[i][j] = 0;
			}
			
		}
	}



}


champMarkov::~champMarkov()
{
}
