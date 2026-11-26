#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>



std::string wordPicker(const std::vector<std::string>& words, const int wordNum){

    std::string out;
    out = words[wordNum];
    return out;
}

std::string getRow(const std::vector<std::string>& grid, const int rowNum){

    std::string rowString;
    rowString = grid[rowNum];
    return rowString;

}

std::string getCol(const std::vector<std::string>& grid, const int colNum){

    std::string colString;
    for(int i=0; i < grid.size(); i++){
        colString.push_back(getRow(grid, i)[colNum]);
    }
    return colString;
}

// checks if word is in the given string
int wordChecker(const std::string& gridString,const std::string& wordString){

    std::string wordLetters;
    std::string gridLetters;
    bool set = false;

    int wordLen = wordString.size();
    int gridLen = gridString.size();
    int lenDif = gridLen - wordLen;

    if (lenDif >= 0){
        for(int i=0; i<lenDif + 1; i++ ){
            for(int j=0; j < wordLen; j++){
                if(gridString[j + i] != wordString[j]){
                    set = false;
                    j = wordLen;
                }
                else{
                    set =true;
                }
            }
            if(set){
                return i;
        } 
        }
    }
    
    return -1;

}

void solutionString(std::vector<std::string>& solution,const std::vector<std::string> foundWords, const std::vector<std::string>& grid)
{
    int rowLen = grid[0].size();
    int colLen = grid.size();

    for(int i=0; i < colLen; i++){
        std::string hasthtag;
        for(int j=0; j < rowLen; j++){
            hasthtag.push_back('#');
        }
        solution.push_back(hasthtag);
    }

    //FILLING IN ROWS

    for(int i=0; i < foundWords.size(); i++){
        for(int j=0; j < colLen; j++){
            std::string row = getRow(grid, j);
            if(wordChecker(row, foundWords[i]) != -1){
                int startIndex = wordChecker(row, foundWords[i]);
                
                for(int k =startIndex; k < startIndex + foundWords[i].size(); k++){
                    solution[j][k] = foundWords[i][k-startIndex];
                }

            }
        }    

    }

    //FLLING IN COLUMNS

    for(int i=0; i < foundWords.size(); i++){
        for(int j=0; j < rowLen; j++){
            std::string col = getCol(grid, j);
            if(wordChecker(col, foundWords[i]) != -1){
                int startIndex = wordChecker(col, foundWords[i]);
                
                for(int k =startIndex; k < startIndex + foundWords[i].size(); k++){
                    solution[k][j] = foundWords[i][k-startIndex];
                }

            }
        }    

    }

}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){

    int colNum = grid[0].size();

    std::vector<std::string> foundWords;

    for(int i=0; i < words.size(); i++){
        bool found = false;

        for(int j=0; j < grid.size(); j++){
            std::string row = getRow(grid, j);
            if(wordChecker(row, words[i]) != -1){
                found = true;
                foundWords.push_back(words[i]);
            }
            else{
                
            }

        }
        
        for(int k=0; k < colNum; k++){
            std::string col = getCol(grid, k);
            if(wordChecker(col, words[i]) != -1){
                found = true;
                foundWords.push_back(words[i]);
            }
            else{

            }

        }

        if(!found){
            not_found.push_back(words[i]);
        }
    }



    solutionString(solution, foundWords, grid);



}


int main(){

    std::vector<std::string> grid = {
        "pmelono",
        "lbcdefr",
        "atigera",
        "nhijkln",
        "eqrstug",
        "tvwxyze"
    };

    std::vector<std::string> words = {"planet", "melon", "pepper", "fruit", "orange", "tiger", "lion"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "pmelono",
        "l#####r",
        "atigera",
        "n#####n",
        "e#####g",
        "t#####e"
    };

    std::vector<std::string> expected_not_found = {"pepper", "fruit", "lion"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

    
    grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> newSolution;
    std::vector<std::string> newNot_found;

    find_words(grid, words, newSolution, newNot_found); 

    expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    expected_not_found = {"mango", "cinnamon"};

    if( (newSolution == expected_solution) && (newNot_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "Solution:" << std::endl;
    for(int i = 0; i < newSolution.size(); i++){
        std::cout << newSolution[i] << std::endl;
    }

    std::cout << "Not found:" << std::endl;
    for(int i = 0; i < newNot_found.size(); i++){
        std::cout << newNot_found[i] << std::endl;
    }




}