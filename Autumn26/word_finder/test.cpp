#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

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

int wordChecker(const std::string& gridString,const std::string& wordString){

    std::string wordLetters;
    std::string gridLetters;
    bool set = false;

    int wordLen = wordString.size();
    int gridLen = gridString.size();
    int lenDif = gridLen - wordLen;



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

        return -1;
}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    int colNum = grid[0].size();

    for(int i=0; i < words.size(); i++){
        bool found = false;

        for(int j=0; j < grid.size(); j++){
            std::string row = getRow(grid, j);
            if(wordChecker(row, words[i]) != -1){
                found = true;
            }
            else{
                
            }

        }
        
        for(int k=0; k < colNum; k++){
            std::string col = getCol(grid, k);
            if(wordChecker(col, words[i]) != -1){
                found = true;
            }
            else{

            }

        }

        if(!found){
            not_found.push_back(words[i]);
        }


    }

}

int main(){

    //std::string gridString = "xtappleg";
    //std::string wordString = "apple";

    //std::cout << wordChecker(gridString, wordString) << std::endl;

     std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }    

        std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }
}