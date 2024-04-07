#include <iostream>
#include <vector>

#include "tableau.hpp"

int main() {
    unsigned int nb_games = 10;
    float winnning_probability = 0.5;
    float losing_probability = 1 - winnning_probability;


    return 0;
};

void simulate_series(unsigned int nb_games,
                     float winnning_probability,
                     float losing_probability,
                     std::vector<unsigned int>& series) {

    unsigned int dimensions[2] = {nb_games + 1, nb_games + 1};
    Tableau<unsigned int> table(std::vector<unsigned int>(dimensions, dimensions + 2));



}
